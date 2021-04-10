#include "../include/lateralmovement.h"
#include "../include/powertrain.h"
#include "../include/globals.h"
#include <Arduino.h>

LateralMovement::LateralMovement()
	: m_powertrain{}
{
	digitalWrite(USONIC_TRIG_PIN, LOW); //explicitly request no signal out of trigPin
}

bool LateralMovement::obstacleCheck()
{
	//send signal
	digitalWrite(USONIC_TRIG_PIN, HIGH);
	delayMicroseconds(10);
	digitalWrite(USONIC_TRIG_PIN, LOW);
	unsigned long usSendTime{micros()};

	//receive signal
	while (digitalRead(USONIC_ECHO_PIN) == LOW
			&& (micros() - usSendTime) < USONIC_TRIG_PIN)

	//if interval between signal send and receive = USONIC_USMAX, then no
	//signal was received, so false will be returned. Else, true is returned.
	return {micros()- usSendTime - USONIC_USMAX};
}

void LateralMovement::traverseForward()
{
	bool obstacleDetected{true};

	m_powertrain.forward(TRAVERSE_SPEED);

	//while ('IR emitter not detected')
	{	
		if (obstacleCheck())
		{
			m_powertrain.stop();

			//wait for obstacle to be removed
			while (obstacleDetected)
			{
				obstacleDetected = obstacleCheck();
				delay(100); //to ensure proper usonic sensor output
			}

			m_powertrain.forward(TRAVERSE_SPEED);
		}

		delay(100); //to ensure proper usonic sensor output
	}
}
