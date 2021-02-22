// 2개의 led on-off 동시에 반복 점멸

void setup() {
  pinMode(13,OUTPUT); // 핀 제어 - 13번의 LED를 출력
  pinMode(10, OUTPUT); // 핀 제어 - 10번의 LED를 출력
}

void loop() {

  analogWrite(13,255); // 13번 핀을 255의 밝기(range: 0~255)로 킴
  analogWrite(10,255); // 10번 핀을 255의 밝기로 킴
  delay(1000); // 시간 지연
  
  analogWrite(13,0); // 13번 핀을 0의 밝기로 킴(꺼진 상태를 의미)
  analogWrite(10,0); // 10번 핀을 0의 밝기로 킴(꺼진 상태를 의미)
  delay(1000); // 시간 지연
}
