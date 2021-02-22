#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27,16,2); // lcd 변수 선언(주소, 열, 행)

void setup()
{
  lcd.init(); // initialize the lcd
  lcd.backlight(); // print a message to the lcd
  lcd.print("Hello, I'm Yebin hehe");
}

void loop() {
}
