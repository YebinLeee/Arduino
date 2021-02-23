// 토양수분센서 이용해서 값 읽기

void setup() {
  Serial.begin(115200);
}

void loop() {
  int value=analogRead(A1);
  
  Serial.print("value = ");
  Serial.println(value);
  delay(1000);
}
