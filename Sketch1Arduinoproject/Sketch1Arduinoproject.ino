/*
 Name:		Sketch1Arduinoproject.ino
 Created:	8/27/2020 12:56:06 PM
 Author:	nabmsi
*/
//#define Blink



#ifdef Blink
//Blink
#include <Servo.h>
void setup() { 
	pinMode(LED_BUILTIN, OUTPUT); 
	}
 
void loop() { 
	digitalWrite(LED_BUILTIN, HIGH);
	delay(1000);
	digitalWrite(LED_BUILTIN, LOW);
	delay(1000);
	}

#else
#include "ServoPlayRecord.h"
void setup() {
	ServoPR_Setup();
	}


void loop() {
	Do_loop();
	}
#endif // 
 

