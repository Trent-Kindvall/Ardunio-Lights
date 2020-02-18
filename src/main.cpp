#include <Arduino.h>
#include <Easyiot-Esp8266.h>

const char*  ssid = "T'NT"; // <-- Enter the name of your WiFi network here
const char* password = "Pleaseme1"; // <-- Enter your WiFi network password here
//String EasyToken = "MEU_EASY_TOKEN"; // <-- Paste here your Easy Token, obtained on the platform "https://app.easyiot.com.br"
int intervalo_de_transmissao = 10000; // <-- Interval in milliseconds (10,000 ms == 10s)

void setup() {
  Serial.begin(9600);
  delay(2000);
  Serial.print("Connecting to");
  Serial.println(ssid);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.print("IP adress:");
  Serial.println(WiFi.localIP());
  Serial.println();

  SNTP();
}

void loop() {
  // put your main code here, to run repeatedly:
}