#include "arduino_secrets.h"

#define BUTTON_PIN 4

void setup()
{
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}


void loop()
{
  Serial.println(digitalRead(BUTTON_PIN));
  delay(100);
}