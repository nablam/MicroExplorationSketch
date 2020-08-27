// ServoPlayRecord.h

#ifndef _SERVOPLAYRECORD_h
#define _SERVOPLAYRECORD_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
void ServoPR_Setup();
void Do_loop();
 
void playServo(uint8_t servoPin, uint8_t buttonPin);
void recordServo(uint8_t servoPin, uint8_t analogPin, uint8_t buttonPin);
#endif

