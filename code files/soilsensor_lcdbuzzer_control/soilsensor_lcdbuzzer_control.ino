// 토양수분의 값을 lcd에 출력 + 수분 부족하면 buzzer 울림

#include <LiquidCrystal.h>
LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  Serial.begin(115200);
  pinMode(8,OUTPUT);
  
  lcd.init();
  lcd.backlight();
}

void loop() {
  int value=analogRead(A1);

  Serial.print("read soil sensor value= ");
  Serial.println(value);

  // 같은 행에 value 출력
  lcd.setCursor(0,0);
  lcd.print("sensor value=");
  lcd.setCursor(13, 0); // 13열 0행
  lcd.println(value);

  if(value>500){
    tone(8,494);
  }
  else{
    noTone(8);
  }
  delay(500);
  }
  lcd.clear();
  delay(1000);
}
