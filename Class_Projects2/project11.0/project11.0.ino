#include "arduino_secrets.h"

#include <LiquidCrystal.h> // includes the LiquidCrystal Library 
LiquidCrystal lcd(1, 2, 4, 5, 6, 7); // Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7) 

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