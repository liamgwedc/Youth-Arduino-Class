#include "arduino_secrets.h"

#define POTENTIOMETER_PIN A1

void setup() {
  Serial.begin(9600);
}

void loop() {
  int potentiometerValue = analogRead(POTENTIOMETER_PIN);

  Serial.println(potentiometerValue);

  delay(100);
}
