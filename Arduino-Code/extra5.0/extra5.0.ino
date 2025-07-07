const int tiltPin = 2;		// tilt sensor pin is connected to pin 2
const int ledPin = 13;		// built-in LED is connected to pin 13

void setup() {
	pinMode(tiltPin, INPUT);		// set sensor pin as an INPUT pin
	digitalWrite(tiltPin, HIGH);	// turn on the built in pull-up resistor
	pinMode(ledPin, OUTPUT);		// set LED pin as an OUTPUT pin
  Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(tiltPin));

	if (digitalRead(tiltPin)) { // check if the pin is high
		digitalWrite(ledPin, HIGH);	// turn on the LED
	}
	else { // if it isn't
		digitalWrite(ledPin, LOW);	// do the opposite
	}
  delay(200);
}