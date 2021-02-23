//서보 모터 사용(360도 좌우 회전)

#include <Servo.h>
Servo myservo; // 객체 생성

void setup() {
  myservo.attach(6);
}

void loop() {

  for(int deg=0;deg<=180;deg+=5){
    myservo.write(deg);
    delay(20);
  }
   for(int deg=180;deg>=0;deg-=5){
    myservo.write(deg);
    delay(20);
  }

}
