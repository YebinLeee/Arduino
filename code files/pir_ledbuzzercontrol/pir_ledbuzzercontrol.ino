// 적외선 인체감지센서(도난경보장치) - 출입문 전등 + buzzer

void setup() {
  Serial.begin(115200);
  pinMode(13,OUTPUT);
  pinMode(3,INPUT);
  pinMode(8,OUTPUT); // buzzer 추가
}

void loop() {
  int sensorValue=digitalRead(3);
  Serial.println(sensorValue);

  if(sensorValue==LOW) // 0인경우(물체 감지)
  {
    digitalWrite(13,HIGH);
    tone(8,261,200);
    Serial.println("LED ON!");
    Serial.println("Buzzer ON!");
  }

  else{
    digitalWrite(13,LOW);
    noTone(8);
    Serial.println("LED OFF!");
  }
  delay(1000);

}
