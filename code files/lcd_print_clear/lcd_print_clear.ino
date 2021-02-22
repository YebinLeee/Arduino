// LCD 화면에 문자열 출력

#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27,16,2); // 주소, 열, 행

void setup()
{
  lcd.init();
  lcd.backlight();
}

void loop() {
  lcd.clear(); // 기존의 내용 삭제
  
  lcd.setCursor(0,0); // 0행 0열로 커서 이동
  lcd.print("Hi?"); // 출력
  delay(500);
  
  lcd.setCursor(0,1); // 0행 1열
  lcd.print("How are you?"); // 출력
  delay(1000);
  
  lcd.clear(); // 기존의 내용 지움
  lcd.setCursor(0,0);
  lcd.print("Doing good ?");
  delay(500);
  
  lcd.setCursor(0,1);
  lcd.print("Have a nice day ");
  delay(1000);
}
