//첫번째 버튼(6번pin) 누르면 LED켜고, 두번째 버튼(5번pin) 누르면 LED끔


void setup() {
  Serial.begin(115200);
  pinMode(9,OUTPUT); // 9번 led핀
  pinMode(5,INPUT); // 5번 button1핀
  pinMode(6,INPUT); // 6번 button2핀

}

void loop() {
  /*Serial.println(digitalRead(6));
  Serial.println(digitalRead(5));
  delay(500);*/
  
  if(digitalRead(6)==LOW) // 6번 핀 button 누르면
 {
  digitalWrite(9,HIGH); // led켜짐
  Serial.println("LED ON");
  delay(500);
  }
  
  else if(digitalRead(5)==LOW) // 5번 핀 button 누르면
 {
  digitalWrite(9,LOW); // led꺼짐
  Serial.print("LED OFF");
  delay(500);
 }
 delay(500);
}
