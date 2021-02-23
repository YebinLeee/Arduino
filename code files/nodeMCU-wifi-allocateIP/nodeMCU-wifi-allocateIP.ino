// 공유기에 접속하여 IP 할당받기

#include <ESP8266WiFi.h>

// 공유기 비밀번호 ssik, pw 입력
const char* ssid="iptime-us";
const char* password="bible39270";
WiFiServer server(80);

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while(WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println(WiFi.localIP());
}

void loop() {

}
