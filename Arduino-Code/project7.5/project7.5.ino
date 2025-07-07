#define P_RESISTOR A1
#define LED_PIN 11

int pResVal;

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  pResVal = analogRead(P_RESISTOR);
  int brightness = pResVal / 4;
  Serial.println(brightness);

  analogWrite(LED_PIN, brightness);

  delay(200);
}