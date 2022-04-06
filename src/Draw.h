#include "TFT.h"
#include "Bitmap.h" 

// Функция вывода главного меню
void DrawMain() {
tft.fillScreen(0x0000);

// Прорисовка значков Wi-Fi и Battary    
tft.drawBitmap(393, 8, WiFi, 25, 25, 0xFFFF);
tft.drawBitmap(425, 10, Battery_1, 25, 25, 0xFFFF);
tft.drawBitmap(425, 10, Battery_2, 25, 25, 0x0778);

// Прорисовка линейки значений
tft.drawRoundRect(30, 127, 420, 20, 2, 0xFFFF);
for(int i = 40; i < 450; i+=10){
tft.fillRect(i, 144, 1, 2, 0xFFFF);
}
for(int i = 80; i < 450; i+=50){
tft.fillRect(i, 142, 2, 4, 0xFFFF);
}

// Прорисовка линейки значений
tft.drawRoundRect(30, 177, 420, 20, 2, 0xFFFF);
for(int i = 40; i < 450; i+=10){
tft.fillRect(i, 194, 1, 2, 0xFFFF);
}
for(int i = 130; i < 450; i+=100){
tft.fillRect(i, 192, 2, 4, 0xFFFF);
}

// Прорисовка часов 
tft.setCursor(30,30);
tft.print("11:30:00"); 
tft.setTextColor(0x0778);
tft.print(" Fr"); 
tft.setTextColor(0xFFFF);
tft.setCursor(30,55);
tft.print("06.04.2022");

// Прорисовка IP
tft.setCursor(230,30);
tft.setTextColor(0x0778);
tft.print("IP: 192.168.1.1"); ;
tft.drawRoundRect(229, 34, 43, 27, 3, 0xFF20);
tft.setCursor(230,55);
tft.print("L13"); 

// Прорисовка значений тока
tft.setCursor(30,250);
tft.setTextColor(0x0778);
tft.print("Current: "); tft.print("0"); tft.print(" A");

// Прорисовка значений кулерра 
tft.setCursor(210,250);
tft.setTextColor(0x0778);
tft.print("Fun Speed: "); tft.print("0"); tft.print(" %");
}

// Функция прорисовки кнопок
void DrawButton() {
// Прорисовка кнопоки 1
tft.drawRoundRect(30, 280, 80, 30, 3, 0xFF20);
tft.drawRoundRect(29, 280, 80, 30, 3, 0xFF20);
tft.drawRoundRect(28, 280, 80, 30, 3, 0xFF20);
tft.setTextColor(0xFFFF);
tft.setCursor(35, 304);
tft.print("MENU");

// Прорисовка кнопоки 2
tft.drawRoundRect(120, 280, 80, 30, 3, 0xFF20);
tft.drawRoundRect(119, 280, 80, 30, 3, 0xFF20);
tft.drawRoundRect(118, 280, 80, 30, 3, 0xFF20);
tft.setTextColor(0xFFFF);
tft.setCursor(125, 304);
tft.print(" < Hz");

// Прорисовка кнопоки 3
tft.drawRoundRect(210, 280, 80, 30, 3, 0xFF20);  
tft.drawRoundRect(209, 280, 80, 30, 3, 0xFF20);
tft.drawRoundRect(208, 280, 80, 30, 3, 0xFF20);
tft.setTextColor(0xFFFF);
tft.setCursor(215, 304);
tft.print("  Hz >");

// Прорисовка кнопоки 4
tft.drawRoundRect(300, 280, 80, 30, 3, 0xFF20);
tft.drawRoundRect(299, 280, 80, 30, 3, 0xFF20);
tft.drawRoundRect(298, 280, 80, 30, 3, 0xFF20);
tft.setTextColor(0xFFFF);
tft.setCursor(305, 304);
tft.print(" PWM");
}

// Функция вывода заставки
void L13_Start(){
tft.fillScreen(0x0000);
for (int i = 0; i <= 480; i++) {
tft.drawPixel(i, 70, 0xFF20);
tft.drawPixel(480-i, 250, 0xFF20);
delay(1);
}

for (int i = 0; i <= 480; i++) {
tft.drawPixel(i, 70, 0x0000);
tft.drawPixel(480-i, 250, 0x0000);
delay(1);
}

tft.drawBitmap(0, 0, L_L, 480, 320, 0x0778);
delay(200);
tft.drawBitmap(0, 0, L_1, 480, 320, 0x0778);
delay(200);
tft.drawBitmap(0, 0, L_3, 480, 320, 0x0778);
delay(500);
tft.fillScreen(0x0000);
delay(200);
}