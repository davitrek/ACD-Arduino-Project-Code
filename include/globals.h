#pragma once
#include <Arduino.h>

#define DEBUG

//PLEASE SET OR NOTHING WILL WORK, 1 SET AS DEFAULT TO ALLOW DEBUG COMPILING

#define POWERTRAIN_MOTOR 3
#define POWERTRAIN_FOR_SPEED 100
#define POWERTRAIN_REV_SPEED 50

#define CRANEROTATE_MOTOR 4
#define CRANEROTATE_SPEED 100
#define CRANEROTATE_TIME 1000

#define CRANERAISE_MOTOR 2
#define CRANERAISE_FOR_SPEED 100
#define CRANERAISE_FOR_TIME 2000
#define CRANERAISE_REV_SPEED 50
#define CRANERAISE_REV_TIME 2000

#define CRANEDELIVER_MOTOR 1
#define CRANEDELIVER_FOR_SPEED 50
#define CRANEDELIVER_FOR_TIME 2000
#define CRANEDELIVER_REV_SPEED 80
#define CRANEDELIVER_REV_TIME 3000

#define USONIC_TRIG_PIN 15
#define USONIC_ECHO_PIN 16
#define USONIC_REPEAT_AMOUNT 3
#define USONIC_OBSTACLE_DISTANCE_MAX 50

#define IRSENSOR_PIN 14

#define BUZZER_PIN 17
#define GOLIGHT_PIN 18
#define STOPLIGHT_PIN 19

//Speed pin defines EN-connected pin
//Forward, reverse pin define respective input-connected pins

//Speed defines how quickly the respective motor will rotate (in %)
//Time defines how long the respective motor will be rotating for (in ms)
	//The above two are expected to be the same for every single repetition of the program
