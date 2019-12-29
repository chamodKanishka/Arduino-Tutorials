#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal LCD(rs, en,d4,d5,d6,d7);
void setup() {
  // put your setup code here, to run once:

  LCD.begin(16,2);
  LCD.print("Hello World!");

}

void loop() {
  // put your main code here, to run repeatedly:

}
