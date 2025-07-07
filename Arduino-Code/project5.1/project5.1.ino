#define RED_PIN 11
#define GREEN_PIN 10
#define BLUE_PIN 9

int delayStep = 20;

int redColor = 0;
int blueColor = 0;
int greenColor = 0;

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
  for (int i = 0; i <= 255; i ++){
    redColor += 1;
    setColor(redColor, blueColor, greenColor);
    delay(delayStep);
  }

  for (int i = 0; i <= 255; i ++){
    redColor -= 1;
    blueColor += 1;
    setColor(redColor, blueColor, greenColor);
    delay(delayStep);
  }

  for (int i = 0; i <= 255; i ++){
    blueColor -= 1;
    greenColor += 1;
    setColor(redColor, blueColor, greenColor);
    delay(delayStep);
  }

  for (int i = 0; i <= 255; i ++){
    greenColor -= 1;
    redColor += 1;
    setColor(redColor, blueColor, greenColor);
    delay(delayStep);
  }

  for (int i = 0; i <= 255; i ++){
    redColor -= 1;
    setColor(redColor, blueColor, greenColor);
    delay(delayStep);
  }
}

void setColor(int redVal, int blueVal, int greenVal){
  analogWrite(RED_PIN, redVal);
  analogWrite(GREEN_PIN, blueVal);
  analogWrite(BLUE_PIN, greenVal);
}
