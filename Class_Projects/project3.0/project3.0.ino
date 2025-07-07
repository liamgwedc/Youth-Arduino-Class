#include "arduino_secrets.h"

#define BUTTON_PIN 4
#define LED_PIN 12

void setup()
{
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  byte buttonState = digitalRead(BUTTON_PIN);
  
  if (buttonState == LOW) {
      Serial.println("Button is pressed");
      digitalWrite(LED_PIN, HIGH);
  }
  else {
      Serial.println("Button is not pressed");
      digitalWrite(LED_PIN, LOW);
  }
  delay(100);
}