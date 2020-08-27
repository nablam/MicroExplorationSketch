// cpp1.h

#ifndef _CPP1_h
#define _CPP1_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
void helpme();

#endif

