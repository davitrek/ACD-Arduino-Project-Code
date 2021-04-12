#include "../include/powertrain.h"
#include "../include/crane.h"
#include "../include/lateralmovement.h"
#include "../include/globals.h"
#include <Arduino.h>

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

	pinMode(2, OUTPUT);
	pinMode(7, INPUT);
}

void loop()
{

	digitalWrite(2, HIGH);

	delay (100);

 	Serial.println(digitalRead(7) != LOW); //note: if no IR is detected, IR
										 //sensor is HIGH, connect IR sensor to
										 //5V out on Uno

	//digitalWrite(13, LOW);

	//rotate.begin();

	//rotate.reset();

	//raise.begin();

	//raise.reset();

	//deliver.begin();

	//deliver.reset();
}
