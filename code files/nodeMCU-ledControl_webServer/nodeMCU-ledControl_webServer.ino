#include <ESP8266WiFi.h>

const char* ssid = "ssid";
const char* password = "pw";
WiFiServer server(80);

int LED_pin=5;

void setup() {
  pinMode(LED_pin, OUTPUT);
  digitalWrite(LED_pin, LOW);
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.print("IP adderss = ");
  Serial.println(WiFi.localIP());

  // Start the server
    server.begin();
  Serial.println("Server started");
}

void loop() {
 // 클라이언트가 접속되었는지 확인
WiFiClient client = server.available();
  if (!client) {
    return;
  }
  
// 클라이언트가 데이터를 보낼 때까지 기다림
Serial.println("new client");
  while(!client.available()){
    delay(1);
  }
  
// 리퀘스트의 첫번째 줄을 읽어들임
String request = client.readStringUntil('\r');
  Serial.println(request);
  client.flush();
  
// 리퀘스트에 따른 LED제어
int value = LOW;
  if (request.indexOf("/LED=ON") != -1) {
    digitalWrite(LED_pin, HIGH);
      value = HIGH;
  }
  if (request.indexOf("/LED=OFF") != -1) {
    digitalWrite(LED_pin, LOW);
     value = LOW;
  }
  
// 클라이언트 리퀘스트에 대한 응답 메시지
client.println("HTTP /1.1 200 OK");
client.println("Content Type: text/html");
client.println(""); // do not forget this one
client.println("<!DOCTYPE HTML>");
client.println("<html>");
client.print("Led is turned ");
  if(value) 
    client.print("On");
 else
    client.print("Off");
client.println("<br><br>");
client.println("<a href=\"/LED=ON \"\"><button">Turn On </button></a>");
client.println("<a href=\"/LED=OFF \"\"><button>Turn Off </button></a><br/>");
client.println ("</html>");

delay(1);
Serial.println("Client disonnected");
Serial.println("");
}
