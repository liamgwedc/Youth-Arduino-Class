#include <Servo.h>

#define JSX_PIN  A0
#define JSY_PIN  A1

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int totalVal = 0;

void setup() {
  myservo.attach(9);
  Serial.begin(9600);
}

void loop() {
  totalVal = (analogRead(JSX_PIN) + analogRead(JSY_PIN)) / 11.4;

  Serial.println(totalVal);

  delay(100);

  myservo.write(totalVal);
}