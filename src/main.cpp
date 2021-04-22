#include "../include/powertrain.h"
#include "../include/crane.h"
#include "../include/lateralmovement.h"
#include "../include/globals.h"
#include <Arduino.h>
#include <AFMotor.h>

Crane rotate{CRANEROTATE_MOTOR,
			CRANEROTATE_SPEED,
			CRANEROTATE_TIME,
			CRANEROTATE_SPEED,
			CRANEROTATE_TIME};

Crane raise{CRANERAISE_MOTOR,
			CRANERAISE_FOR_SPEED,
			CRANERAISE_FOR_TIME,
			CRANERAISE_REV_SPEED,
			CRANERAISE_REV_TIME};

Crane deliver{CRANEDELIVER_MOTOR,
			CRANEDELIVER_FOR_SPEED,
			CRANEDELIVER_FOR_TIME,
			CRANEDELIVER_REV_SPEED,
			CRANEDELIVER_REV_TIME};

LateralMovement lateralMovement{};

//int i{};

void setup()
{
	Serial.begin(9600);

	pinMode(2, OUTPUT);
}

void loop()
{
	//FINAL CODE

	lateralMovement.playMegalovania();
/*
	lateralMovement.traverseForward();

	delay(2000);

	raise.begin();
	rotate.begin();
	deliver.begin();

	operateServo();

	deliver.reset();
	rotate.reset();
	raise.reset();

	lateralMovement.traverseBackward();

	delay(20000); //delay for placing an egg in


/*
	if (!(digitalRead(14)))

	{
		++i;
		Serial.print(i);
		Serial.println(" detected");
	}
*/
	/*
	servo.write(180);
	delay(10000);
	servo.write(80);
	delay(5000);
	servo.write(180);
	delay(1000);
	exit(0);
	*/
}
