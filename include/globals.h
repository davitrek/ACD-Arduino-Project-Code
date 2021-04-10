#pragma once
#include <Arduino.h>

//PLEASE SET OR NOTHING WILL WORK, 1 SET AS DEFAULT TO ALLOW DEBUG COMPILING

#define POWERTRAIN_SPEED_PIN 1
#define POWERTRAIN_FOR_PIN 1
#define POWERTRAIN_REV_PIN 1

#define TRAVERSE_SPEED 100

#define CRANEROTATE_SPEED_PIN 1
#define CRANEROTATE_FOR_PIN 1
#define CRANEROTATE_REV_PIN 1
#define CRANEROTATE_SPEED 1
#define CRANEROTATE_TIME 1

#define CRANERAISE_SPEED_PIN 1
#define CRANERAISE_FOR_PIN 1
#define CRANERAISE_REV_PIN 1
#define CRANERAISE_SPEED 1
#define CRANERAISE_TIME 1

#define CRANEDELIVER_SPEED_PIN 1
#define CRANEDELIVER_FOR_PIN 1
#define CRANEDELIVER_REV_PIN 1
#define CRANEDELIVER_SPEED 1
#define CRANEDELIVER_TIME 1

#define USONIC_TRIG_PIN 1
#define USONIC_ECHO_PIN 1
#define USONIC_USMAX 2000 //~35cm equivalent

//Speed pin defines EN-connected pin
//Forward, reverse pin define respective input-connected pins

//Speed defines how quickly the respective motor will rotate (in %)
//Time defines how long the respective motor will be rotating for (in ms)
	//The above two are expected to be the same for every single repetition of the program
