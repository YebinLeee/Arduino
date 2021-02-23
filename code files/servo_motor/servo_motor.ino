//서보 모터 사용(180도 좌우 회전)
#include <Servo.h>
Servo myservo; // 객체 생성

void setup() {
  myservo.attach(6); 
}

void loop() {
  myservo.write(0);
  delay(1000);
  myservo.write(90); // 1초 후 90도 출력
  delay(100);
  myservo.write(180);
  delay(1000);

}
