#include "arduino_secrets.h"

#define POTENTIOMETER_PIN A1
#define LED_PIN 11

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int potentiometerValue = analogRead(POTENTIOMETER_PIN);

  int brightness = potentiometerValue / 4;
  analogWrite(LED_PIN, brightness);
  Serial.println(brightness);

  delay(100);
}
