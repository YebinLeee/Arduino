#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27,16,2); // 주소, 열, 행

void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.print("Hello, I'm Yebin hehe");
 
}

void loop() {
 
}
