// buzzer을 이용한 학교 종이 땡땡땡 melody
// c~c1 한 옥타브
int c=262;
int d=294;
int e=330;
int f=349;
int g=392;
int a=440;
int b=494;
int c1=523;

// 솔솔라라, 솔솔미, 솔솔미미레, (솔솔라라 솔솔미 - 반복), 솔미레미레도
int notes[]={g,g,a,a,g,g,e,g,g,e,e,d,g,e,d,e,c};

void setup() {
  pinMode(8,OUTPUT);
}

void loop() {

  // 솔솔라라 솔솔 미
  for(int i=0;i<6;i++){
    tone(8,notes[i],200);
    delay(300);
  }
  tone(8,notes[6], 600);
  delay(500);

  // 솔솔미미레
  for(int i=7;i<11;i++){
    tone(8,notes[i], 200);
    delay(300);
  }
  tone(8,notes[11],4600);
  delay(500);

  // 솔솔라라 솔솔미
  for(int i=0;i<6;i++){
    tone(8,notes[i],200);
    delay(500);
  }
  tone(8,notes[6], 600);
  delay(300);

  // 솔미레미도
    for(int i=12;i<17;i++){
    tone(8,notes[i],200);
    delay(500);
  }
  tone(8,notes[17], 600);
  delay(2000);

}
