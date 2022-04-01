#include <Arduino.h>
#include <SPI.h>
#include "TFT.h"

void setup() {
  TFT_setings();
}

void loop() {
  tft.fillScreen(0xFF0F);
}