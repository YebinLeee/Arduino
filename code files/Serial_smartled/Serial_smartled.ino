// 조도센서를 이용하여 어두워지면 LED를 켜고 밝으면 LED를 끔
// 스마트 가로등의 프로토타입 (횡단보도,신호등)

void setup() {
  pinMode(9,OUTPUT);
  Serial.begin(115200);
 
}

void loop() {
  int cdsValue=analogRead(A0);

  Serial.print("cds = ");
  Serial.println(cdsValue);

  if(cdsValue>300) // 조도값이 300이상인경우(어두움)
  {
    Serial.println("Turn ON the lamp");
    analogWrite(9,255);
  }
  else{
    Serial.println("Turn OFF the lamp");
    analogWrite(9,0);
  }
  delay(2000);
}
