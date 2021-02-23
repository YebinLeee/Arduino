// 조도센서 활용하여 어두워지면 서보 모터 실행

#include <Servo.h>
Servo myservo;

void setup() {
  myservo.attach(6);
}

void loop() {
  if (analogRead(A0) >500){
    myservo.write(90);
  }
  else{
    myservo.write(0);
  }
}
