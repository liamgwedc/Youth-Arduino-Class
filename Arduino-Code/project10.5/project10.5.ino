#define TRIG_PIN 10
#define ECHO_PIN 11

#define LED_PIN 3

float duration, distance;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH);

  distance = (duration*.0343)/2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance < 10){
    analogWrite(LED_PIN, 255);
  } else if (distance < 25){
    analogWrite(LED_PIN, 40);
  } else {
    analogWrite(LED_PIN, 0);
  }

  delay(200);
}