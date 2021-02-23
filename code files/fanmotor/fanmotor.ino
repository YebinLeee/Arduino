// 팬 모터 돌리기

void setup() {
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);

}

void loop() {
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  delay(1000);

  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(1000);

  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  delay(1000);

  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(1000);

  // 속도제어를 위해선 analogWrite(6,value);
}
