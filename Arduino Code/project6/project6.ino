#define JSX_PIN  A0
#define JSY_PIN  A1


#define RED_PIN 11
#define GREEN_PIN 10
#define BLUE_PIN 9

int delayStep = 100;

int xVal = 0;
int yVal = 0;

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
  xVal = analogRead(JSX_PIN) / 4;
  yVal = analogRead(JSY_PIN) / 4;

  setColor(xVal, yVal, 255);

  delay(delayStep);
}

void setColor(int redVal, int blueVal, int greenVal){
  analogWrite(RED_PIN, redVal);
  analogWrite(GREEN_PIN, blueVal);
  analogWrite(BLUE_PIN, greenVal);
}
