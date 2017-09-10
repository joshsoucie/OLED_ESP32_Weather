
// This example just provide basic function test;
// For more informations, please vist www.heltec.cn or mail to support@heltec.cn

//#include <Wire.h>  // Only needed for Arduino 1.6.5 and earlier
#include <TimeLib.h>
#include "SSD1306.h" // alias for `#include "SSD1306Wire.h"`
#include "OLEDDisplayUi.h"
#include <WiFi.h>
#include "images.h"
#include <ArduinoJson.h>

// Comment to commit...ugh

//Setup WiFi
const char ssid[] = "HomeSweetHome"; //  your network SSID (name)
const char password[] = "020293120490";    // your network password (use for WPA, or use as key for WEP)
WiFiClient client;

const char host[] = "api.wunderground.com";
const char key[] = "d4119dfca60ee8de";

// api url built according to [https://www.wunderground.com/weather/api/d/docs?MR=1]
const char* url = "http://api.wunderground.com/api/d4119dfca60ee8de/conditions/q/TX/San_Antonio.json";

// string to hold response from api
String currCondString;

//OLED pins to ESP32 GPIOs via this connecthin:
//OLED_SDA -- GPIO4
//OLED_SCL -- GPIO15
//OLED_RST -- GPIO16

SSD1306  display(0x3c, 4, 15);
OLEDDisplayUi ui ( &display );

int screenW = 128;
int screenH = 64;
int clockCenterX = screenW/2;
int clockCenterY = ((screenH-16)/2)+16;   // top yellow part is 16 px height

void setup() {
  pinMode(16,OUTPUT);
  digitalWrite(16, LOW);    // set GPIO16 low to reset OLED
  delay(50);
  digitalWrite(16, HIGH); // while OLED is running, must set GPIO16 in high

  Serial.begin(9600);
  Serial.println();

  // The ESP is capable of rendering 60fps in 80Mhz mode
  // but that won't give you much time for anything else
  // run it in 160Mhz mode or just set it to 30 fps
  ui.setTargetFPS(60);

  // You can change this to
  // TOP, LEFT, BOTTOM, RIGHT
  ui.setIndicatorPosition(TOP);

  // Defines where the first frame is located in the bar.
  ui.setIndicatorDirection(LEFT_RIGHT);

  // Initialising the UI will init the display too.
  ui.init();

  display.flipScreenVertically();
  display.setFont(ArialMT_Plain_10);
  display.setTextAlignment(TEXT_ALIGN_CENTER);
  display.clear();
  initWifi(ssid,password);

  /*
  StaticJsonBuffer<200> jsonBuffer;

  char json[] =
      "{}";
    */
}

void loop() {

 /* JsonObject& root = jsonBuffer.parseObject(json);

  // Test if parsing succeeds.
  if (!root.success()) {
    Serial.println("parseObject() failed");
    return;
  }

  const char* cond = root["current_observation"]["weather"]
*/
  String str = "Loading";
  int counter = 0;

  while (counter < 4) {
    display.clear();
    display.drawString(64, 22, str);
    display.display();
    delay(500);

    str += ".";
    counter++;
  }
}

int initWifi(const char* ssid, const char* pwd) {

  int connAttempts = 0;
  display.clear();
  display.print("Connecting to ");
  display.println(ssid);
  display.drawLogBuffer(10, 10);
  display.display();
  WiFi.begin(ssid, pwd);

  while (WiFi.status() != WL_CONNECTED ) {
    delay(500);
    display.print(".");
    display.drawLogBuffer(0, 0);
    display.display();
    if(connAttempts > 20) return -5;
    connAttempts++;
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  return 1;

}

int getURL(const char* host, const char* url, String* resultString) {
  // kill all connections first
  client.stop();

  // start connection
  Serial.print("connecting to ");
  Serial.println(host);
  const int httpPort = 80;
  if (!client.connect(host, httpPort)) {
    Serial.println("connection failed");
    return -6;
  }

  // We now create a URI for the request
  Serial.print("Requesting URL: ");
  Serial.println(url);

  // This will send the request to the server
  client.print(String("GET ") + url + " HTTP/1.1\r\n" +
  "Host: " + host + "\r\n" +
  "Connection: close\r\n\r\n");
  unsigned long timeout = millis();
  while (client.available() == 0) {
    if (millis() - timeout > 5000) {    // If Timeout
      Serial.println(">>> Client Timeout !");
      client.stop();
      return -7;
    }
  }

  // Read all the lines of the reply from server and print them to serial. Save them in resultString for parsing
  while(client.available()) {
    Serial.println("Loading api result into resultString...");
    *(resultString) = client.readStringUntil('\r');
  }

  Serial.println();
  Serial.println("closing connection");

  // redundant, should probably remove
  client.stop();
  return 1;

}
