// 적외선 인체감지센서 - 출입문 전등

void setup() {
  Serial.begin(115200);
  pinMode(13,OUTPUT);
  pinMode(3,INPUT);
}

void loop() {
  int sensorValue=digitalRead(3);
  Serial.println(sensorValue);

  if(sensorValue==LOW) // 0인경우(물체 감지)
  {
    digitalWrite(13,HIGH);
    Serial.println("LED ON!");
  }

  else{
    digitalWrite(13,LOW);
    Serial.println("LED OFF!");
  }
  delay(1000);

}
