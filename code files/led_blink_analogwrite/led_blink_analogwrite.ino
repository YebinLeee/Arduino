// 서서히 밝고 어두워지는 led 반복 점멸

int ledPin=13; // 전역변수 선언. ledPin을 13번 핀으로 초기화

void setup() {
  pinMode(ledPin,OUTPUT); // 핀 제어 - 13번의 LED를 출력
}

void loop() {
  
 // 밝기 0에서 255로 5씩 증가하면서 led on 되기를 반복
 for(int fadeValue=0; fadeValue<=255;fadeValue+=5){
  analogWrite(ledPin, fadeValue); // 밝기에 해당하는 아날로그 값을(PWM wave) led핀에 출력
  delay(50);
 }
  // 밝기 255에서 0으로 5씩 감소하면서 led on 되기를 반복
  for (int fadeValue=255; fadeValue>=0; fadeValue-=5){
    analogWrite(ledPin, fadeValue);
    delay(50);
  }
}
