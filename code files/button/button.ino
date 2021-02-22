//button 사용

void setup() {
  pinMode(6,INPUT); // 6번 button 핀으로 입력받음
  Serial.begin(115200); // 입력값은 씨리얼 통신 속도(baud rate 115200 - mega 2560 board)
}

void loop() {
  Serial.println(digitalRead(6)); // 6번핀을 디지털 형으로 읽어 출력
  // 버튼 입력받으면 0 출력
  delay(500); // 시간 지연
}
