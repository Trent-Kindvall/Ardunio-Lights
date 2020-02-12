#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define LED_PIN            192
#define LED_NUM            5 /* turns out pin 5 was a good guess */ 

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(LED_NUM, LED_PIN, NEO_GRB + NEO_KHZ800);
int delayval = 500;

void setup() {
  pixels.begin();

}

void loop() {

  for(int i=0;i< LED_NUM;i++){

    pixels.setPixelColor(i,pixels.Color(100,100,100));
    pixels.show();

    delay(delayval);

  }

}