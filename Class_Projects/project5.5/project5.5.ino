#include "arduino_secrets.h"

#define POTENTIOMETER_PIN A1
#define RED_PIN 11
#define GREEN_PIN 10
#define BLUE_PIN 9

int delayStep = 20;

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
  int intensityVal = analogRead(POTENTIOMETER_PIN) / 4;

  //Blue
  setColor(0, 0, intensityVal);

  //Green
  //setColor(0, intensityVal, 0);

  //Purple
  //setColor(intensityVal / 2, 0, intensityVal);

  //Red
  //setColor(intensityVal, 0, 0);

  delay(delayStep);
}

void setColor(int redVal, int blueVal, int greenVal){
  analogWrite(RED_PIN, redVal);
  analogWrite(GREEN_PIN, blueVal);
  analogWrite(BLUE_PIN, greenVal);
}