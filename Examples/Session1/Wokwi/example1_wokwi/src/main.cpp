#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  Serial.println("Hello, World!");
  pinMode(PC13, OUTPUT);
  pinMode(PB9, OUTPUT);
}

void loop() {
  digitalWrite(PC13, HIGH);
  digitalWrite(PB9, HIGH);
  delay(1000);
  digitalWrite(PC13, LOW);
  digitalWrite(PB9, LOW);
  Serial.println("loop!");
  delay(1000);
}
