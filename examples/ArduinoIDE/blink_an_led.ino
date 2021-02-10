#include <Blink.h>

Blink board;    //Initialize an object

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  board.blinkLED(LED_BUILTIN, 500);   //board.blinkLED(int pin, int delay); For a frequency of 1 Hz
                                      //The blinkLED function acts as a method here as it is required by the ArduinoIDE. This is not the case in PIO
}
