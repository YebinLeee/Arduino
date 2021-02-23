// ES8266-Node MCU 1.0 의 embeded LED 또는 led 모듈 연결하여 점멸

void setup() {
  pinMode(D1, OUTPUT);
  // pinMode(D0, OUTPUT); // D0에 해당하는 GPIO16 pin을 출력
}

void loop() {
  digitalWrite(D1, HIGH); // LED ON
  delay(1000);
  digitalWrite(D1, LOW); // LED OFF
  delay(1000);
}
