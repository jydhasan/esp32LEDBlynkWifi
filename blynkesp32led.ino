#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[] = "aByr8wpVYfsSCleznUxR9MJYQXHJWJSe";
char ssid[] = "zahid";
char pass[] = "123456789";

// #define BLYNK_TEMPLATE_ID "TMPLUejLvEdh"
// #define BLYNK_TEMPLATE_NAME "LED on and off"
// #define BLYNK_AUTH_TOKEN "Il1kxrHuICi1pW4Loo7iIyhvsTWPiYch"

void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass,"blynk.cloud",80);
}

void loop() {
  Blynk.run();
}
