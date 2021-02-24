#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27,16,2); // lcd 객체 생성(주소, 열, 행)

void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.print("Hello, I'm Yebin hehe"); // lcd 화면에 문자열 출력(16번째 문자열에서 끝남)
}

void loop() {
 
}
