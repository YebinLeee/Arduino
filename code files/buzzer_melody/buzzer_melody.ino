// melody
// c~c1 한 옥타브
int c=262;
int d=294;
int e=330;
int f=349;
int g=392;
int a=440;
int b=494;
int c1=523;

// 도~높은도, 높은도~도
int notes[16]={c,d,e,f,g,a,b,c1,c1,b,a,g,f,e,d,c};

void setup() {
  pinMode(8,OUTPUT);

}

void loop() {
  // 도~높은도
  for(int i=0;i<8;i++){
    tone(8,notes[i],200);
    delay(300);
  }
  delay(500);

  // 높은도~도
  for(int i=8;i<16;i++){
    tone(8,notes[i], 200);
    delay(300);
  }
  delay(1000);

}
