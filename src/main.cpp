#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define LED_PIN 14 /* turns out pin 5 was a good guess */
#define LED_NUM 192

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(LED_NUM, LED_PIN, NEO_GRB + NEO_KHZ800);
int delayval = 100;

void setup()
{
  pixels.begin();
  pixels.show();
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