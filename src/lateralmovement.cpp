#include "../include/lateralmovement.h"
#include "../include/powertrain.h"
#include "../include/globals.h"
#include <Arduino.h>

LateralMovement::LateralMovement()
	: m_powertrain{}
{
	pinMode(USONIC_TRIG_PIN, OUTPUT);
	pinMode(USONIC_ECHO_PIN, INPUT);
	digitalWrite(USONIC_TRIG_PIN, LOW); //explicitly request no signal out of trigPin
}

unsigned long LateralMovement::obstacleDistance()
{
	//send signal
	digitalWrite(USONIC_TRIG_PIN, HIGH);
	delayMicroseconds(10);
	digitalWrite(USONIC_TRIG_PIN, LOW);

	//obstacle distance is length of pulse * speed of sound in cm/us / 2
	//divided by 2 because signal needs to get there and back
	return {pulseIn(USONIC_ECHO_PIN, HIGH) * 0.034 / 2};
}

bool LateralMovement::obstacleCheck()
{
	unsigned long aggregateDistance{};

	bool obstacleExists{};

	//loop through n times to ensure accuracy
	for (int i {0}; i < USONIC_REPEAT_AMOUNT; ++i)
	{
		obstacleExists += obstacleDistance() < USONIC_OBSTACLE_DISTANCE_MAX;
		delay(100); //remove any feedback interference from usonic sensor
	}

	Serial.print("Obstacle distance: "); //DEBUG !!!!!!!!!!!!!!!!!!!!!
	Serial.print(obstacleDistance());
	Serial.println(" cm"); //END DEBUG

	Serial.println(obstacleExists);

	return {obstacleExists};
}

//RETURN FALSE IF IR SENSOR NOT DETECTED
bool LateralMovement::irSensorCheck()
{
	//voltage on IR sensor pin will be low if source is detected
	return {digitalRead(IRSENSOR_PIN) == LOW}
}

void LateralMovement::traverseForward()
{
	m_powertrain.forward(TRAVERSE_SPEED);

	while (irSensorCheck())
	{
		if (obstacleCheck())
		{
			Serial.println("HELLO!!!!!");
			m_powertrain.stop();

			//wait for obstacle to be removed
			while (true)
			{
				Serial.println("OBSTACLE HERE!!!");

				if (!obstacleCheck())
					break;
			}
		}

		m_powertrain.forward(TRAVERSE_SPEED);
	}

	m_powertrain.stop();
}
