#include "arduino_secrets.h"

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

