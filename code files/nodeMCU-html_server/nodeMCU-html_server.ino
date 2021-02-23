#include <ESP8266WiFi.h>

const char* ssid = "iptime-us";
const char* password = "bible39270";
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
    while(client.connected()){
      client.println("HTTP/1.1 200 OK");
      client.println("Content-Type: text/html");
      client.println("Connection: close");
      client.println();
      client.println("<!DOCTYPE HTML>");
      client.println("<html>");
      client.println("<head><title>IOT Websever</title>");
      client.println("</head>");
      client.println("<body><center>");
      client.println("<h1>Hello IOT Server</h1>");
      client.println("<p>Web Server TEST</p>");
      client.println("</center></body>");
      client.println("</html>");
      break;
    }
    delay(1);
    client.stop();
    Serial.println("Client disonnected");
  }
}
