#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27,16,2); // I2C로 통신하는 lcd 객체 선언(주소, 열, 행 - 16열 2행의 LCD화면)

void setup()
{
  lcd.init(); // initialize the lcd
  lcd.backlight(); // print a message to the lcd(until the 16th)
  lcd.print("Hello, I'm Yebin hehe");
}

void loop() {
}
