#include <Arduino.h>
#include <Blink.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);   //Set the pin as OUTPUT
}

void loop() {
  blinkLED(LED_BUILTIN, 500);   //blinkLED(int pin, int delay); For a frequency of 1 Hz
}
