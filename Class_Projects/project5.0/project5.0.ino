#include "arduino_secrets.h"

#define RED_PIN 11
#define GREEN_PIN 10
#define BLUE_PIN 9

int delayStep = 1000;

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
    // Red
  setColor(255, 0, 0);
  delay(delayStep);

  // Green
  setColor(0, 255, 0);
  delay(delayStep);

  // Blue
  setColor(0, 0, 255);
  delay(delayStep);

  // White kinda..
  setColor(255, 255, 255);
  delay(delayStep);

  // Black or off
  setColor(0, 0, 0);
  delay(delayStep);

  // TODO Pick your own color
  setColor(0, 0, 0);
  delay(delayStep);
}

void setColor(int redVal, int blueVal, int greenVal){
  analogWrite(RED_PIN, redVal);
  analogWrite(GREEN_PIN, blueVal);
  analogWrite(BLUE_PIN, greenVal);
}
