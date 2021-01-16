#include <Wire.h>
#include "SSD1306.h"

SSD1306Wire  display(0x3c, 1, 3); //SDA --> 1, SCL --> 3
void setup() {

  display.init();
  display.drawString(0, 0, "Hello World");
  display.display();
}
void loop() {
}
//  display.drawFastImage( 0, 0, 128, 64, NAT_bits);
