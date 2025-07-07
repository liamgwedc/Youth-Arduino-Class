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