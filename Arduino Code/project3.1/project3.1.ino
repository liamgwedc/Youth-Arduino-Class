#define BUTTON_PIN 4

void setup()
{
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  byte buttonState = digitalRead(BUTTON_PIN);
  
  if (buttonState == LOW) {
      Serial.println("Button is pressed");
      digitalWrite(LED_BUILTIN, HIGH);
  }
  else {
      Serial.println("Button is not pressed");
      digitalWrite(LED_BUILTIN, LOW);
  }
  delay(100);
}