// 2개의 led pin 번갈아가며 점멸

void setup() {
 
  pinMode(13,OUTPUT); // 핀 제어 - 13번의 LED를 출력
  pinMode(10, OUTPUT); // // 핀 제어 - 10번의 LED를 출력
}

void loop() {
  
  digitalWrite(13,HIGH); // 핀의 상태(HIGH=1)디지털 방식으로 13번 LED 핀을 킨다
  digitalWrite(10,LOW); // LED 핀을 끔(LOW=0)
  delay(1000); // 시간 지연(인수값 1000 - 1초)

  digitalWrite(13,LOW); // LED 핀을 끔(LOW=0)
  digitalWrite(10,HIGH); // 핀의 상태(HIGH=1)디지털 방식으로 10번 LED 핀을 킨다
  delay(1000); // 시간 지연

 
}
