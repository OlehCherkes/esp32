#include <Arduino.h>
#include <SPI.h>
#include "TFT.h"
#include "Encoder.h"
#include "Draw.h"

int previous_value = 0;

void setup() {
TFT_setings();
L13(); 
DrawMain();
DrawButton();
Encoder_setings();
}

void loop() {
EncoderRead();

tft.setCursor(30,120);
tft.setTextColor(0x0778);
tft.setTextSize(1);
tft.print("FREQUENCY: "); tft.print(EncoderRead()); tft.print(" Hz");
tft.setCursor(30,170);
tft.print("DUTY CYCLE: "); tft.print("0"); tft.print(" %");

if (value1 > previous_value) {
  tft.fillRect(30+value1, 128, 1, 18, 0x0FF0);
}
if (value1 < previous_value) {
  tft.fillRect(31+value1, 128, 1, 18, 0x0000);
}
previous_value = value1;
}
