#include <Arduino.h>
#include <SPI.h>
#include "Adafruit_GFX.h"
#include "Adafruit_ST7796S_kbv.h"
#include <Adafruit_I2CDevice.h> 


// These are 'flexible' lines that can be changed
#define TFT_CS 15
#define TFT_DC 2
#define TFT_RST 5 // RST can be set to -1 if you tie it to Arduino's reset

// Use hardware SPI (on Uno, #13, #12, #11) and the above for CS/DC
Adafruit_ST7796S_kbv tft = Adafruit_ST7796S_kbv(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  tft.begin(); // запуск работы TFT екрана
  tft.fillScreen(0x0000); // закрашивание экрана в черный цыет
  tft.setRotation(3); // функуия поворота экрана(экрана позиция №1/горизонтальная)
}

void loop() {
  tft.fillScreen(0x0FFF);
}