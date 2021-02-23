// 수위 측정 센서

void setup() {
  Serial.begin(115200);
  
}

void loop() {
  int waterPin=analogRead(A2);

  Serial.print("waterPin: ");
  Seral.println(waterPin);

  delay(1000);

}
