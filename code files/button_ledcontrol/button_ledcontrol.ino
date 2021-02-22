//button pressed - LED on

void setup() {
  pinMode(9,OUTPUT); // led 9 pin - 출력
  pinMode(6,INPUT); // button 6 pin - 입력받음

}

void loop() {
 if(digitalRead(6)==LOW) // 6번핀이 0이면(누른 경우)
 {
  digitalWrite(9,HIGH); // led on
  delay(500);
  }
 else{
  digitalWrite(9,LOW); // 6번핀 누르지 않은 경우엔 led off
  delay(500);
 }
}
