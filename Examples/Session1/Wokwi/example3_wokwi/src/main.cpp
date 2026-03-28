#include <Arduino.h>
#define LEDS 4
int ledPins[LEDS] = {PB5, PB6, PB7, PB8};

// LED patterns: rows = steps, columns = LEDs (1 = ON, 0 = OFF)
uint8_t pattern[6][LEDS] = {
 {1, 0, 0, 0},
 {0, 1, 0, 0},
 {0, 0, 1, 0},
 {0, 0, 0, 1},
 {1, 1, 0, 0},
 {0, 1, 1, 0}
};

void hw_init()
{
 Serial.begin(115200);
 for (int i = 0; i < LEDS; i++) pinMode(ledPins[i], OUTPUT);

}

void setup() {
 hw_init();
}


void drive_leds(uint8_t pattern[])
{
   // Traverse each LED in the row using pointer arithmetic
   for (int j = 0; j < LEDS; j++) {
     digitalWrite(ledPins[j], pattern[j]); // set LED
   }
}

void loop() {
 uint8_t (*pRow)[LEDS]; // pointer to an array of 4 uint8_t
 for (int i = 0; i < 6; i++) {
   pRow = &pattern[i]; // point to row i
   drive_leds(*pRow);
   delay(400);
 }
}
