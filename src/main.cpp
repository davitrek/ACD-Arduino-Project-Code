#include "../include/powertrain.h"
#include "../include/crane.h"
#include "../include/lateralmovement.h"
#include "../include/globals.h"
#include <Arduino.h>
<<<<<<< HEAD
#include <AFMotor.h>
=======
#include <Servo.h>
>>>>>>> a92068696f26e9b304b924d62567815abe939cc3

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

<<<<<<< HEAD
//int i{};
=======
Servo myservo;

int angle{0};
>>>>>>> a92068696f26e9b304b924d62567815abe939cc3

void setup()
{
	Serial.begin(9600);

<<<<<<< HEAD
	pinMode(2, OUTPUT);
=======
	//pinMode(2, OUTPUT);
	//pinMode(7, INPUT);

	myservo.attach(9);


>>>>>>> a92068696f26e9b304b924d62567815abe939cc3
}

void loop()
{
<<<<<<< HEAD
	//FINAL CODE

	lateralMovement.playMegalovania();
/*
	lateralMovement.traverseForward();

	delay(2000);

	raise.begin();
	rotate.begin();
	deliver.begin();
=======
	// Tell the servo to go to a particular angle:
    myservo.write(90);
    delay(5000);
    myservo.write(150);
    delay(1000);
    //myservo.write(0);
    //delay(1000);


	//myservo.writeMicroseconds(1000);

	//servo.write(60);

	//servo.write(0);

	//delay(15);

	//servo.write(70);

	//digitalWrite(2, HIGH);

	//delay (100);

 	//Serial.println(digitalRead(7) != LOW); //note: if no IR is detected, IR
										 //sensor is HIGH, connect IR sensor to
										 //5V out on Uno
>>>>>>> a92068696f26e9b304b924d62567815abe939cc3

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
