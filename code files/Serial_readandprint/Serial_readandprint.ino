char data; // 문자열

void setup() {
  Serial.begin(115200);

}

void loop() {
  if(Serial.available()) // 데이터 입력 받은게 있다면
  {
    data=Serial.read(); // 읽은 데이터 변수에 저장
    Serial.print("Input:");
    Serial.println(data); // 읽은 데이터 출력(문자 한개)
    
  }
  
}
