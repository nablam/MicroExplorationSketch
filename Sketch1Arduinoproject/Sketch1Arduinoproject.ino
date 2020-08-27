/*
 Name:		Sketch1Arduinoproject.ino
 Created:	8/27/2020 12:56:06 PM
 Author:	nabmsi
*/

// the setup function runs once when you press reset or power the board
#include "cpp1.h"
void setup() {
	Serial.begin(2000000);
}

// the loop function runs over and over again until power down or reset
void loop() {
	helpme();
}
