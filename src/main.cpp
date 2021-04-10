#include "../include/powertrain.h"
#include "../include/crane.h"
#include "../include/lateralmovement.h"
#include "../include/globals.h"
#include <Arduino.h>

#define DEBUG

Crane rotate{CRANEROTATE_SPEED_PIN,
			CRANEROTATE_FOR_PIN,
			CRANEROTATE_REV_PIN,
			CRANEROTATE_SPEED,
			CRANEROTATE_TIME};

Crane raise{CRANERAISE_SPEED_PIN,
	CRANERAISE_FOR_PIN,
	CRANERAISE_REV_PIN,
	CRANERAISE_SPEED,
	CRANERAISE_TIME};

Crane deliver{CRANEDELIVER_SPEED_PIN,
	CRANEDELIVER_FOR_PIN,
	CRANEDELIVER_REV_PIN,
	CRANEDELIVER_SPEED,
	CRANEDELIVER_TIME};

LateralMovement lateralMovement{};

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	//
}
