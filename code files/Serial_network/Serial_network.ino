int ledPin=13;
char data;

void setup() {
 
  Serial.begin(115200); // 115200의 속도로 시리얼 통신 시작(메가보드속도)
}

void loop() {
   Serial.println("Hello World"); // 줄바꿈 추가(print+lin)
}
