// 토양수분의 값을 lcd에 출력

#include <LiquidCrystal.h>
LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  int value=analogRead(A1);

  // 같은 행에 value 출력
  lcd.setCursor(0,0);
  lcd.print("sensor value=");
  lcd.setCursor(13,0); // 13열 0행
  lcd.println(value);
  
  //lcd.clear();
  delay(1000);
}
