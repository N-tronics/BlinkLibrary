#ifndef Blink_h
#define Blink_h
#include "Arduino.h"

class Blink {
	private:
		int led;
		
	public:
		Blink();
		void blinkLED(int pin, int del);
		
	#endif
};