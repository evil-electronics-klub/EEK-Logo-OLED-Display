#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include "EEK_Bitmap.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.display();
}

void loop() {
display.clearDisplay();

// Calculate the starting position to centerize the image horizontally
int startX = (display.width() - your_bitmap_width) / 2;

display.drawBitmap(startX, 0, EEK_Bitmap, your_bitmap_width, your_bitmap_height, 1);
display.display();
}
