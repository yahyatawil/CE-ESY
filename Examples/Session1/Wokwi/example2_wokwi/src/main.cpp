#include <Arduino.h>

const int redLED = PB7;
const int yellowLED = PB8;
const int greenLED = PB9;
const int buttonPin = PB6;

void setup() {
 pinMode(redLED, OUTPUT);
 pinMode(yellowLED, OUTPUT);
 pinMode(greenLED, OUTPUT);
 pinMode(buttonPin, INPUT_PULLDOWN);
}


void loop() {
 // Sequence
 digitalWrite(redLED, HIGH);
 delay(500);
 digitalWrite(yellowLED, HIGH);
 delay(500);
 digitalWrite(greenLED, HIGH);
 // Conditional
 if (digitalRead(buttonPin) == HIGH) {
   // Button pressed → Blink green LED
   for (int i = 0; i < 5; i++) {
     digitalWrite(greenLED, HIGH);
     delay(500);
     digitalWrite(greenLED, LOW);
     delay(500);
   }
 }
   // Reset LEDs
 digitalWrite(redLED, LOW);
 digitalWrite(yellowLED, LOW);
 digitalWrite(greenLED, LOW); 
 delay(500);
}

