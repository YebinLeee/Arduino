// 버튼을 누르면 팬모터 실행
// (+버튼 여러개 이용하여 방향 조절)

void setup() {
  pinMode(10,INPUT); // button 10pin
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);

}

void loop() {
  if(digitalRead(10)==LOW)
  {
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    delay(1000);
  }
  else
  {
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
  }
  delay(200);

}
