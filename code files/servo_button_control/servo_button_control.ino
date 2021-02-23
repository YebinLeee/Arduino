// 버튼 누르면 서보 모터 실행

#include <Servo.h>
Servo myservo;

void setup() {
  pinMode(5,INPUT); // button 5pin
  myservo.attach(6);
}

void loop() {
  if(digitalRead(5)==LOW) // 버튼 입력 받으면
  {
    myservo.write(90); // 모터 90도 회전
  }
  else{
    myservo.write(0);
  }

}
