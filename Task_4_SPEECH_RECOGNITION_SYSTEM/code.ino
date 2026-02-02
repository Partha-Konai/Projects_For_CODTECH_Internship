#include <WiFi.h>
#include <WebSocketsClient.h>
#include "SinricPro.h"
#include "SinricProSwitch.h"

#define WIFI_SSID     "XXXX"
#define WIFI_PASS     "XXXX"

#define APP_KEY       "XXXXXX"
#define APP_SECRET    "XXXXXX"

#define SWITCH_ID1    "XXXXX"
#define SWITCH_ID2    "XXXXX"
#define SWITCH_ID3    "XXXXX"

#define LED_PIN1 18
#define LED_PIN2 19
#define LED_PIN3 21

bool onPowerState(const String &deviceId, bool &state) {

  if (deviceId == SWITCH_ID1) {
    digitalWrite(LED_PIN1, state ? HIGH : LOW);
    Serial.println(state ? "LED 1 ON" : "LED 1 OFF");
  }
  else if (deviceId == SWITCH_ID2) {
    digitalWrite(LED_PIN2, state ? HIGH : LOW);
    Serial.println(state ? "LED 2 ON" : "LED 2 OFF");
  }
  else if (deviceId == SWITCH_ID3) {
    digitalWrite(LED_PIN3, state ? HIGH : LOW);
    Serial.println(state ? "LED 3 ON" : "LED 3 OFF");
  }

  return true;
}

void setup() {
  Serial.begin(115200);

  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
  pinMode(LED_PIN3, OUTPUT);

  WiFi.begin(WIFI_SSID, WIFI_PASS);
  Serial.print("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println("\nWiFi Connected");

  // Attach switches
  SinricProSwitch &switch1 = SinricPro[SWITCH_ID1];
  SinricProSwitch &switch2 = SinricPro[SWITCH_ID2];
  SinricProSwitch &switch3 = SinricPro[SWITCH_ID3];

  switch1.onPowerState(onPowerState);
  switch2.onPowerState(onPowerState);
  switch3.onPowerState(onPowerState);

  SinricPro.begin(APP_KEY, APP_SECRET);
  Serial.println("Sinric Pro Connected");
}

void loop() {
  SinricPro.handle();
}
