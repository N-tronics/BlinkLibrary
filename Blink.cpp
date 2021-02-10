#include "Blink.h"
#include "Arduino.h"

Blink::Blink (){}

void Blink::blinkLED(int pin, int del) {
  digitalWrite(pin, 1);
  delay(del);
  digitalWrite(pin, 0);
  delay(del);
}