#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX

void setup() {
  pinMode(9, OUTPUT);  // this pin will pull the HC-05 pin 34 (key pin) HIGH to switch module to AT mode
  digitalWrite(9, HIGH);
  pinMode(LED_BUILTIN, OUTPUT);
  mySerial.begin(38400);
}

void loop() {
  if (mySerial.available()) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);                       
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
  }
}