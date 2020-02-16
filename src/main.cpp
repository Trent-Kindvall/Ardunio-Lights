#include <Arduino.h>
#include <Adafruit_NeoPixel.h> // Lights

#include <DNSServer.h>            //Local DNS Server used for redirecting all requests to the configuration portal
#include <ESP8266WebServer.h>     //Local WebServer used to serve the configuration portal
#include <WiFiManager.h>          //https://github.com/tzapu/WiFiManager WiFi Configuration Magic

#define LED_PIN 14 // this is actualy pin 5 but is graphed to pin 14
#define LED_NUM 192

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(LED_NUM, LED_PIN, NEO_GRB + NEO_KHZ800);
int delayval = 100;

void setup()
{
  pixels.begin();
  pixels.show();
  WiFiManager wifiManager;
  wifiManager.autoConnect("TNT","Pleaseme1");

}

void loop()
{

  for (int i = 0; i < LED_NUM; i++)
  {

    pixels.setPixelColor(i, 100, 100, 100);
    pixels.show();

    delay(100);
  }
}