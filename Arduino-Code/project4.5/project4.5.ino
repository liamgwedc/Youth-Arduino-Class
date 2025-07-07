#define POTENTIOMETER_PIN A2
#define LED_PIN 12

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int potentiometerValue = analogRead(POTENTIOMETER_PIN);

  int brightness = potentiometerValue;
  analogWrite(LED_PIN, brightness);
  Serial.println(brightness);

  delay(100);
}
