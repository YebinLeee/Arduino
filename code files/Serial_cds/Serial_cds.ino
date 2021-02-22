// 조도센서로 밝기 읽어들임

void setup() {
  Serial.begin(115200); // 아날로그 입력값을 시리얼 통신으로 받음
}

void loop() {
  
  int cdsValue=analogRead(A0); // A0 핀의 조도센서를 통해 얻는 아날로그 값(빛의 세기) 읽어들임
  // 밝기와 cdsValue값 반비례(밝을수록 조도 센서의 저항 값 감소)

  Serial.print("Light = "); 
  Serial.println(cdsValue);

  delay(500);

}
