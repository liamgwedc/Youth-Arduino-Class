#include "arduino_secrets.h"

#define P_RESISTOR A1

int pResVal;

void setup() {
  Serial.begin(9600);
}

void loop() {
  pResVal = analogRead(P_RESISTOR);

  Serial.println(pResVal);

  delay(200);
}
