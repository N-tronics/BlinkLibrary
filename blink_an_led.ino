#include <Blink.h>  //Include the library

#define LED 13  //Define the led pin

Blink board;  //Initialize an object

void setup() {
  pinMode(LED, OUTPUT); //Set the pin as an OUTPUT
}

void loop() {
  board.blinkLED(LED, 100); //object.blinkLED(int pin, int delay);
}
