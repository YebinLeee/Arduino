void setup() {
  pinMode(A0,INPUT);
  Serial.begin(115200);
}

void loop() {
  int value=analogRead(A0);
  Serial.println(value);
  delay(1000);

}
