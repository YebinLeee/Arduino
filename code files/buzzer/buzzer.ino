//buzzer 반복 (pin 번호 8)

void setup() {
  pinMode(8,OUTPUT); // buzzer(pin8) 출력
}

void loop() {
  
  //UCC:5v, IO:pin8, GND:GND 
  
  tone(8,261,250); // pin, frequency, duration
  delay(500);
  noTone(8);
  delay(1000);
}
