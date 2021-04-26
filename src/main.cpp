#include <Arduino.h>
#include <WiFi.h>

const char* WIFI_SSID = "Wifi_Undiknas 3D";
const char* WIFI_PASS = "";
const char* HOSTNAME = "IOTPAGIESP12";

void setup() {
  // put your setup code here, to run once:
    Serial.begin(115200);

    WiFi.mode(WIFI_STA);
    WiFi.begin(WIFI_SSID, WIFI_PASS);
    WiFi.setHostname(HOSTNAME);
    
    Serial.print("Connecting to WiFi");
    while (WiFi.status() != WL_CONNECTED)
    {
      /* code */
      Serial.print(".");
      delay(1000);
    }
    Serial.println("");
    Serial.println("WiFi connected successfuly");
    
}

void loop() {
  // put your main code here, to run repeatedly:
}