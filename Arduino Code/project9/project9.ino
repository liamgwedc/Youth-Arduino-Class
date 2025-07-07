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