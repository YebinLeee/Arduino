#include <ESP8266WiFi.h>

const char* ssid = "ssid";
const char* password = "pw";
WiFiServer server(80);

void setup() {
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
  WiFiClient client = server.available();
  if (client) {
    Serial.println("new client");
    while(client.available()){

      break;
    }
    delay(1);
    client.stop();
    Serial.println("Client disonnected");
  }
}
