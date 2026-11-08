
#include <Arduino.h>

#define VRX_PIN 17
#define VRY_PIN 2
#define SW_PIN  7

void setup() {
  Serial.begin(115200);

  pinMode(VRX_PIN, INPUT);
  pinMode(VRY_PIN, INPUT);
  pinMode(SW_PIN, INPUT_PULLUP);

  analogReadResolution(12);
}

void loop() {

  int xValue = analogRead(VRX_PIN);
  int yValue = analogRead(VRY_PIN);
  int buttonState = digitalRead(SW_PIN);

  Serial.print("X: ");
  Serial.print(xValue);

  Serial.print(" | Y: ");
  Serial.print(yValue);

  Serial.print(" | SW: ");
  Serial.println(buttonState);

  delay(150);
}

