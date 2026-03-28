#include <Arduino.h>

#define HISTORY_SIZE 10
#define BTN_PIN PB9
int pressHistory[HISTORY_SIZE];
int indexPos = 0;
void logButtonPress(int state) {
   pressHistory[indexPos] = state;
   indexPos =   indexPos >= HISTORY_SIZE ? 0 : indexPos+1 ; // wrap around
}
void printHistory() {
   char buffer[64];
   buffer[0] = '\0'; // empty string
   for (int i = 0; i < HISTORY_SIZE; i++) {
       char num[4];
       sprintf(num, "%d ", pressHistory[i]);
       strcat(buffer, num); // append to string
   }
   Serial.println(buffer);
}
void setup() {
  Serial.begin(115200);
  pinMode(BTN_PIN, INPUT);
}
void loop() {
   int btn = digitalRead(BTN_PIN) == HIGH ? 1 : 0;
   logButtonPress(btn);
   delay(1000);
   printHistory();
}
