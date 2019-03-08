#include <ESP8266WiFi.h>
#include <WiFiClient.h>

#ifndef APSSID
#define APSSID "EmbedX-ESPWifFi"
#define APPSK  "therther"
#endif

/* Set these to your desired credentials. */
const char *ssid = APSSID;
const char *password = APPSK;

void setup() {
  delay(1000);
  Serial.begin(115200);
  Serial.println();
  Serial.print("Configuring access point...");
  /* You can remove the password parameter if you want the AP to be open. */
  WiFi.softAP(ssid, password);

  IPAddress myIP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(myIP);
  }

void loop() {
  }
