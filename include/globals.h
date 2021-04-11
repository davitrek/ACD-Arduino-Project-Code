#pragma once
#include <Arduino.h>

#define DEBUG

//PLEASE SET OR NOTHING WILL WORK, 1 SET AS DEFAULT TO ALLOW DEBUG COMPILING

#define POWERTRAIN_SPEED_PIN 3
#define POWERTRAIN_FOR_PIN 7
#define POWERTRAIN_REV_PIN 4

#define TRAVERSE_SPEED 100

#define CRANEROTATE_SPEED_PIN 1 //unused
#define CRANEROTATE_FOR_PIN 12
#define CRANEROTATE_REV_PIN 13
#define CRANEROTATE_SPEED 0 //unused
#define CRANEROTATE_TIME 2000

#define CRANERAISE_SPEED_PIN 11
#define CRANERAISE_FOR_PIN 9
#define CRANERAISE_REV_PIN 10
#define CRANERAISE_SPEED 100
#define CRANERAISE_TIME 15000

#define CRANEDELIVER_SPEED_PIN 11
#define CRANEDELIVER_FOR_PIN 1
#define CRANEDELIVER_REV_PIN 1
#define CRANEDELIVER_SPEED 1
#define CRANEDELIVER_TIME 1

#define USONIC_TRIG_PIN 2
#define USONIC_ECHO_PIN 8
#define USONIC_REPEAT_AMOUNT 3
#define USONIC_OBSTACLE_DISTANCE_MAX 50

#define IRSENSOR_PIN 8

//Speed pin defines EN-connected pin
//Forward, reverse pin define respective input-connected pins

//Speed defines how quickly the respective motor will rotate (in %)
//Time defines how long the respective motor will be rotating for (in ms)
	//The above two are expected to be the same for every single repetition of the program
