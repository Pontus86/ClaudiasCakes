#include <WiFi.h>
#include <WiFiClientSecure.h>

const char* ssid = "yourSSID";
const char* password = "yourPASSWORD";

WiFiServer server(443);

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("Connecting to WiFi...");
  }

  server.begin();
  Serial.println("Server started");

  // Code to initialize GPIO for the lock
}

void loop() {
  WiFiClient client = server.available();

  if (client) {
    Serial.println("New Client.");
    String currentLine = "";
    while (client.connected()) {
      if (client.available()) {
        char c = client.read();
        Serial.write(c);
        if (c == '\n') {
          // Check the client request and control the lock
        }
      }
    }
    client.stop();
    Serial.println("Client Disconnected.");
  }
}
#include <WiFi.h>
#include <WiFiClientSecure.h>

const char* ssid = "yourSSID";
const char* password = "yourPASSWORD";

WiFiServer server(443);

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("Connecting to WiFi...");
  }

  server.begin();
  Serial.println("Server started");

  // Code to initialize GPIO for the lock
}

void loop() {
  WiFiClient client = server.available();

  if (client) {
    Serial.println("New Client.");
    String currentLine = "";
    while (client.connected()) {
      if (client.available()) {
        char c = client.read();
        Serial.write(c);
        if (c == '\n') {
          // Check the client request and control the lock
        }
      }
    }
    client.stop();
    Serial.println("Client Disconnected.");
  }
}
