// PIR 모션센서(pin 3)를 이용해 모션 감지
void setup() {
  Serial.begin(115200);

}

void loop() {
  int sensorValue=digitalRead(3); // 감지하면 0 또는 1
  Serial.print("Sensor Value = ");
  Serial.println(sensorValue); 
  delay(1000);
  
  // put your main code here, to run repeatedly:

}
