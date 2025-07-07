## Youth Arduino Coding

This class is broken down into 3 main sections and 12 projects

## project1
``` c++
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // Turing on
  digitalWrite(LED_BUILTIN, HIGH);
  delay(10);
  digitalWrite(LED_BUILTIN, LOW);
  delay(10);
}
```
#### [project1.0](https://app.arduino.cc/sketches/cdc90228-cb01-4b74-abeb-a9439f71cd4d?view-mode=preview)
---
## project 1.5

![project1.5](Arduino-Code/project1.5/arduino_led_circuit.png)
![]()

``` c++
#define LED_PIN 12

void setup()
{
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}
```
#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---
## project 2.0

![]()

``` c++
#define BUTTON_PIN 4

void setup()
{
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}


void loop()
{
  Serial.println(digitalRead(BUTTON_PIN));
  delay(100);
}
```
#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---
## project 2.5

``` c++
#define BUTTON_PIN 4


void setup()
{
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}


void loop()
{
  byte buttonState = digitalRead(BUTTON_PIN);
  if (buttonState == LOW) {
      Serial.println("Button is definitely pressed");
  }
  else {
      Serial.println("Button is not pressed");
  }
  delay(100);
}
```
#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---
## project 3.0

![]()

``` c++
#define BUTTON_PIN 4
#define LED_PIN 12

void setup()
{
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  byte buttonState = digitalRead(BUTTON_PIN);
  
  if (buttonState ==  HIGH) {
      Serial.println("Button is pressed");
      digitalWrite(LED_PIN, HIGH);
  }
  else {
      Serial.println("Button is not pressed");
      digitalWrite(LED_PIN, LOW);
  }
  delay(100);
}
```
#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---
## project 3.1

``` c++
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
```
#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---
## project 4.0

![]()

``` c++
#define POTENTIOMETER_PIN A1

void setup() {
  Serial.begin(9600);
}

void loop() {
  int potentiometerValue = analogRead(POTENTIOMETER_PIN);

  Serial.println(potentiometerValue);

  delay(100);
}
```
#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---
## project 4.5

![]()

``` c++
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
```
#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---
## project 5.0

![]()
![]()

``` c++
#define RED_PIN 11
#define GREEN_PIN 10
#define BLUE_PIN 9

int delayStep = 500;

int redColor = 0;
int blueColor = 0;
int greenColor = 0;

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
    // Red​
  setColor(255, 0, 0);
  delay(delayStep);

  // Green​
  setColor(0, 255, 0);
  delay(delayStep);

  // Blue​
  setColor(0, 0, 255);
  delay(delayStep);

  // White kinda..​
  setColor(255, 255, 255);
  delay(delayStep);

  // Black or off​
  setColor(0, 0, 0);
  delay(delayStep);

  // TODO Pick your own color​
  setColor(235, 159, 34);
  delay(delayStep);

  setColor(255, 0, 255);
  delay(delayStep);
}

void setColor(int redVal, int blueVal, int greenVal){
  analogWrite(RED_PIN, redVal);
  analogWrite(GREEN_PIN, blueVal);
  analogWrite(BLUE_PIN, greenVal);
}
```
#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---
## project 5.1

``` c++
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
```
#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---
## project 5.5

![]()

``` c++
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
  //setColor(0, 0, intensityVal);

  //Green
  //setColor(0, intensityVal, 0);

  //Purple
  setColor(intensityVal / 2, 0, intensityVal);

  //Red
  //setColor(intensityVal, 0, 0);

  delay(delayStep);
}

void setColor(int redVal, int blueVal, int greenVal){
  analogWrite(RED_PIN, redVal);
  analogWrite(GREEN_PIN, blueVal);
  analogWrite(BLUE_PIN, greenVal);
}
```
#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---
## project 6.0

![]()

``` c++
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
```
#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---
## project 7.0

![]()

``` c++
#define P_RESISTOR A1

int pResVal;

void setup() {
  Serial.begin(9600);
}

void loop() {
  pResVal = analogRead(P_RESISTOR);

  Serial.println(pResVal);

  delay(200);
}
```
#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---
## project 7.5

![]()

``` c++
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
```
#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---
## project 8.0

![]()

``` c++
#include <DHT.h>

#define SENSOR_TYPE DHT11
#define SENSOR_PIN 11

DHT dht(SENSOR_PIN, SENSOR_TYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // Wait a few seconds between measurements.
  delay(2000);

  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  float h = dht.readHumidity();
  // Read temperature as Celsius
  float t = dht.readTemperature();
  // Read temperature as Fahrenheit
  float f = dht.readTemperature(true);

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t) || isnan(f)) {
  Serial.println("Failed to read from DHT sensor!");
  return;
  }

  // Compute heat index
  // Must send in temp in Fahrenheit!
  float hi = dht.computeHeatIndex(f, h);

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print(f);
  Serial.print(" *F\t");
  Serial.print("Heat index: ");
  Serial.print(hi);
  Serial.println(" *F");
}
```
#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---
## project 8.5

![]()

``` c++
#include <DHT.h>

#define SENSOR_TYPE DHT11
#define SENSOR_PIN 11
#define LED_PIN 12

DHT dht(SENSOR_PIN, SENSOR_TYPE);

void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  dht.begin();
}

void loop() {
  // Wait a few seconds between measurements.
  delay(2000);

  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  float h = dht.readHumidity();
  // Read temperature as Celsius
  float t = dht.readTemperature();
  // Read temperature as Fahrenheit
  float f = dht.readTemperature(true);

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t) || isnan(f)) {
  Serial.println("Failed to read from DHT sensor!");
  return;
  }

  // Compute heat index
  // Must send in temp in Fahrenheit!
  float hi = dht.computeHeatIndex(f, h);

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(" *C ");
  Serial.print(f);
  Serial.print(" *F\t");
  Serial.print("Heat index: ");
  Serial.print(hi);
  Serial.println(" *F");

  if (f > 83) {
    digitalWrite(LED_PIN, HIGH);

  } else {
    digitalWrite(LED_PIN, LOW);
    
  }
}
```
#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---
## project 9.0

![]()

``` c++
#include <IRremote.h>
#define IR_RECEIVE_PIN 12

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN);
}

void loop() {

  if (IrReceiver.decode()) {
    IrReceiver.resume();
    int signal = IrReceiver.decodedIRData.command;

    Serial.println(signal);
    Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX);
  }

  delay(100);
}
```
#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---
## project 9.5

``` c++
#include <IRremote.h>

#define IR_RECEIVE_PIN 12

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN);
}

int secret = rand() % 10;

void loop() {

  if (IrReceiver.decode()) {
    IrReceiver.resume();
    int signal = IrReceiver.decodedIRData.command;

    //Serial.println(signal);
    int guess = -1;

    switch(signal){
      case 25: // EQ 25
      secret = rand() % 10;
      break;
      case 22: // 0 22
      guess = 0;
      break;
      case 12: // 1 12
      guess = 1;
      break;
      case 24: // 2 24
      guess = 2;
      break;
      case 94: // 3 94
      guess = 3;
      break;
      case 8:  // 4 8
      guess = 4;
      break;
      case 28: // 5 28
      guess = 5;
      break;
      case 90: // 6 90
      guess = 6;
      break;
      case 66: // 7 66
      guess = 7;
      break;
      case 82: // 8 82
      guess = 8;
      break;
      case 74: // 9 74
      guess = 9;
      break;
    }

    Serial.print("The your guess is: ");
    Serial.println(guess);

    make_guess(guess, secret);
    
  }

  delay(100);
}

void make_guess(int guess, int secret){
  if (guess == secret){
    Serial.println("You got it!!");
  } else if (guess == -1){
    Serial.println("Please input a valid Guess");
  } else if (guess > secret){
    Serial.println("Your guess is too big try a lower number");
  } else if (guess < secret){
    Serial.println("Your guess is too small try a bigger number");
  }
}
```
#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---
## project 10.0

``` c++
#define TRIG_PIN 10
#define ECHO_PIN 11

float duration, distance;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH);

  Serial.print("Time: ");
  Serial.print(duration);
  Serial.println(" μs");
  
  delay(200);
}
```
#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---
## project 10.1

``` c++
#define TRIG_PIN 10
#define ECHO_PIN 11

float duration, distance;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
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

  delay(200);
}
```
#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---
## project 10.5

``` c++
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
```
#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---
## project 11.0

``` c++
#include <LiquidCrystal.h> // includes the LiquidCrystal Library 
LiquidCrystal lcd(2, 3, 4, 5, 6, 7); // Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7) 

void setup() { 
 lcd.begin(16,2); // Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display } 
}

void loop() { 
 lcd.print("Hello"); // prints on te display
 delay(3000); // 3 seconds delay 
 lcd.setCursor(1,1); // Sets the location at which subsequent text written to the LCD will be displayed 
 lcd.print("I am Liam"); 
 delay(3000); 
 lcd.clear(); // Clears the display 
 lcd.blink(); //Displays the blinking LCD
 delay(1000); 
 lcd.setCursor(0,0); 
 lcd.print("Resetting..."); 
 delay(3000); 
 lcd.clear(); // Clears the LCD screen 
 delay(1000);
}
```
#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---
## project 11.5

``` c++
#include <DHT.h>
#include <LiquidCrystal.h> // includes the LiquidCrystal Library 

LiquidCrystal lcd(1, 2, 4, 5, 6, 7); // Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7) 

#define SENSOR_TYPE DHT11
#define SENSOR_PIN 11

DHT dht(SENSOR_PIN, SENSOR_TYPE);

void setup() {
  //Serial.begin(9600);
  lcd.begin(16,2);
  dht.begin();
}

void loop() {
  // Wait a few seconds between measurements.
  delay(2000);
  lcd.clear();

  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  float h = dht.readHumidity();
  // Read temperature as Celsius
  float t = dht.readTemperature();
  // Read temperature as Fahrenheit
  float f = dht.readTemperature(true);

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t) || isnan(f)) {
    //Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Compute heat index
  // Must send in temp in Fahrenheit!
  float hi = dht.computeHeatIndex(f, h);

  //lcd.setCursor(0,0);// set the cursor on the first row and column 
  lcd.print("Hum  = "); 
  lcd.print(h);//print the humidity 
  lcd.print("%"); 
  lcd.setCursor(0,1);//set the cursor on the second row and first column 
  lcd.print("Temp = "); 
  lcd.print(f);//print the temperature 
  lcd.print("F"); 
  //delay(2000); 
}
```
#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---
## project 12.0

``` c++
#include "SevSeg.h"
SevSeg sevseg; //Initiate a seven segment controller object

void setup() {
    byte numDigits = 4;  
    byte digitPins[] = {2, 3, 4, 5};
    byte segmentPins[] = {6, 12, 8, 9, 10, 7, 11, 13};
    bool resistorsOnSegments = 0; 
    // variable above indicates that 4 resistors were placed on the digit pins.
    // set variable to 1 if you want to use 8 resistors on the segment pins.
    sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins, resistorsOnSegments);
    sevseg.setBrightness(90);
}

void loop() {
    sevseg.setNumber(3141, 3);
    sevseg.refreshDisplay(); // Must run repeatedly
}
```
#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---
## project 12.5

``` c++
//#include <time.h>

#include "SevSeg.h"
SevSeg sevseg; //Initiate a seven segment controller object

void setup() {
    byte numDigits = 4;  
    byte digitPins[] = {2, 3, 4, 5};
    byte segmentPins[] = {6, 12, 8, 9, 10, 7, 11, 13};
    bool resistorsOnSegments = 0; 
    // variable above indicates that 4 resistors were placed on the digit pins.
    // set variable to 1 if you want to use 8 resistors on the segment pins.
    sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins, resistorsOnSegments);
    sevseg.setBrightness(90);
}

int count = 0;

void loop() {
    sevseg.setNumber(count);
    count += 1;
    sevseg.refreshDisplay(); // Must run repeatedly
}
```
#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---

#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---

#### [project1.5](https://app.arduino.cc/sketches/f3773fd6-cd04-41d1-b560-3860581bcb4f?view-mode=preview)
---
