#include "arduino_secrets.h"

#define BUTTON_PIN 4


void setup()
{
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}


void loop()
{
  byte buttonState = digitalRead(BUTTON_PIN);
  if (buttonState == LOW) {
      Serial.println("Button is pressed");
  }
  else {
      Serial.println("Button is not pressed");
  }
  delay(100);
}