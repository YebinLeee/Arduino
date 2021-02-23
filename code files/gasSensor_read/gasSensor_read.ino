// 가스 감지 센서

void setup() {
  Serial.begin(115200);
  // put your setup code here, to run once:

}

void loop() {
  int gas=analogRead(A3);
  
  Serial.print("gas : ");
  Serial.println(gas);
  
  delay(1000);
}
