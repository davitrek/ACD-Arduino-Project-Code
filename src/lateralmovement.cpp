#include "../include/lateralmovement.h"
#include "../include/powertrain.h"
#include "../include/globals.h"
#include <Arduino.h>
#include <Buzzer.h>

LateralMovement::LateralMovement()
	: m_powertrain{},
	m_buzzer{BUZZER_PIN}
{
	pinMode(USONIC_TRIG_PIN, OUTPUT);
	pinMode(USONIC_ECHO_PIN, INPUT);
	digitalWrite(USONIC_TRIG_PIN, LOW); //explicitly request no signal out of trigPin
}

void LateralMovement::playStarWars()
{
	m_buzzer.sound(NOTE_A3, 500);
  m_buzzer.sound(NOTE_A3, 500);
  m_buzzer.sound(NOTE_A3, 500);
  m_buzzer.sound(NOTE_F3, 375);
  m_buzzer.sound(NOTE_C4, 125);

  m_buzzer.sound(NOTE_A3, 500);
  m_buzzer.sound(NOTE_F3, 375);
  m_buzzer.sound(NOTE_C4, 125);
  m_buzzer.sound(NOTE_A3, 1000);

  m_buzzer.sound(NOTE_E4, 500);
  m_buzzer.sound(NOTE_E4, 500);
  m_buzzer.sound(NOTE_E4, 500);
  m_buzzer.sound(NOTE_F4, 375);
  m_buzzer.sound(NOTE_C4, 125);

  m_buzzer.sound(NOTE_GS3, 500);
  m_buzzer.sound(NOTE_F3, 375);
  m_buzzer.sound(NOTE_C4, 125);
  m_buzzer.sound(NOTE_A3, 1000);

  m_buzzer.sound(NOTE_A4, 500);
  m_buzzer.sound(NOTE_A3, 375);
  m_buzzer.sound(NOTE_A3, 125);
  m_buzzer.sound(NOTE_A4, 500);
  m_buzzer.sound(NOTE_GS4, 375);
  m_buzzer.sound(NOTE_G4, 125);

  m_buzzer.sound(NOTE_FS4, 125);
  m_buzzer.sound(NOTE_E4, 125);
  m_buzzer.sound(NOTE_F4, 250);
  m_buzzer.sound(0, 250);
  m_buzzer.sound(NOTE_AS3, 250);
  m_buzzer.sound(NOTE_DS4, 500);
  m_buzzer.sound(NOTE_D4, 375);
  m_buzzer.sound(NOTE_CS4, 125);

  m_buzzer.sound(NOTE_C4, 125);
  m_buzzer.sound(NOTE_B3, 125);
  m_buzzer.sound(NOTE_C4, 250);
  m_buzzer.sound(0, 250);
  m_buzzer.sound(NOTE_F3, 250);
  m_buzzer.sound(NOTE_GS3, 500);
  m_buzzer.sound(NOTE_F3, 375);
  m_buzzer.sound(NOTE_A3, 125);

  m_buzzer.sound(NOTE_C4, 500);
  m_buzzer.sound(NOTE_A3, 375);
  m_buzzer.sound(NOTE_C4, 125);
  m_buzzer.sound(NOTE_E4, 1000);

  m_buzzer.sound(NOTE_A4, 500);
  m_buzzer.sound(NOTE_A3, 375);
  m_buzzer.sound(NOTE_A3, 125);
  m_buzzer.sound(NOTE_A4, 500);
  m_buzzer.sound(NOTE_GS4, 375);
  m_buzzer.sound(NOTE_G4, 125);

  m_buzzer.sound(NOTE_FS4, 125);
  m_buzzer.sound(NOTE_E4, 125);
  m_buzzer.sound(NOTE_F4, 250);
  m_buzzer.sound(0, 250);
  m_buzzer.sound(NOTE_AS3, 250);
  m_buzzer.sound(NOTE_DS4, 500);
  m_buzzer.sound(NOTE_D4, 375);
  m_buzzer.sound(NOTE_CS4, 125);

  m_buzzer.sound(NOTE_C4, 125);
  m_buzzer.sound(NOTE_B3, 125);
  m_buzzer.sound(NOTE_C4, 250);
  m_buzzer.sound(0, 250);
  m_buzzer.sound(NOTE_F3, 250);
  m_buzzer.sound(NOTE_GS3, 500);
  m_buzzer.sound(NOTE_F3, 375);
  m_buzzer.sound(NOTE_C4, 125);

  m_buzzer.sound(NOTE_A3, 500);
  m_buzzer.sound(NOTE_F3, 375);
  m_buzzer.sound(NOTE_C4, 125);
  m_buzzer.sound(NOTE_A3, 1000);
}

void LateralMovement::playMegalovania()
{
	m_buzzer.begin(10);

	m_buzzer.sound(NOTE_D4, 125);
	m_buzzer.sound(NOTE_D4, 125);
	m_buzzer.sound(NOTE_D5, 250);
	m_buzzer.sound(NOTE_A4, 375);
	m_buzzer.sound(NOTE_GS4,250);
	m_buzzer.sound(NOTE_G4, 250);
	m_buzzer.sound(NOTE_F4, 250);
	m_buzzer.sound(NOTE_D4, 125);
	m_buzzer.sound(NOTE_F4, 125);
	m_buzzer.sound(NOTE_G4, 125);
	m_buzzer.sound(NOTE_C4, 62);
	m_buzzer.sound(NOTE_C4, 62);
	m_buzzer.sound(NOTE_C4, 62);
	m_buzzer.sound(NOTE_C4, 62);
	m_buzzer.sound(NOTE_D5, 250);
	m_buzzer.sound(NOTE_A4, 375);
	m_buzzer.sound(NOTE_GS4, 250);
	m_buzzer.sound(NOTE_G4, 250);
	m_buzzer.sound(NOTE_F4, 250);
	m_buzzer.sound(NOTE_D4, 125);
	m_buzzer.sound(NOTE_F4, 125);
	m_buzzer.sound(NOTE_G4, 125);
	m_buzzer.sound(NOTE_B3, 125);
	m_buzzer.sound(NOTE_B3, 125);
	m_buzzer.sound(NOTE_D5, 250);
	m_buzzer.sound(NOTE_A4, 375);
	m_buzzer.sound(NOTE_GS4, 250);
	m_buzzer.sound(NOTE_G4, 250);
	m_buzzer.sound(NOTE_F4, 250);
	m_buzzer.sound(NOTE_D4, 125);
	m_buzzer.sound(NOTE_F4, 125);
	m_buzzer.sound(NOTE_G4, 125);
	m_buzzer.sound(NOTE_AS3, 62);
	m_buzzer.sound(NOTE_AS3, 62);
	m_buzzer.sound(NOTE_AS3, 62);
	m_buzzer.sound(NOTE_AS3, 62);
	m_buzzer.sound(NOTE_D5, 250);
	m_buzzer.sound(NOTE_A4, 375);
	m_buzzer.sound(NOTE_GS4, 250);
	m_buzzer.sound(NOTE_G4, 250);
	m_buzzer.sound(NOTE_F4, 250);
	m_buzzer.sound(NOTE_D4, 125);
	m_buzzer.sound(NOTE_F4, 125);
	m_buzzer.sound(NOTE_G4, 125);
}

void LateralMovement::reverseBeep()
{
	m_buzzer.sound(NOTE_C6, 500);
	delay(250);
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
	bool obstacleExists{};

	//loop through n times to ensure accuracy
	for (int i {0}; i < USONIC_REPEAT_AMOUNT; ++i)
	{
		obstacleExists += obstacleDistance() < USONIC_OBSTACLE_DISTANCE_MAX;
		delay(100); //remove any feedback interference from usonic sensor
	}

	Serial.print("Obstacle distance: ");
	Serial.print(obstacleDistance());
	Serial.println(" cm");

	//Serial.println(obstacleExists);

	return {obstacleExists};
}

//RETURN FALSE IF IR SENSOR NOT DETECTED
bool LateralMovement::irSensorCheck()
{
	Serial.println(digitalRead(IRSENSOR_PIN) == LOW);
	//voltage on IR sensor pin will be low if source is detected
	return {digitalRead(IRSENSOR_PIN) == LOW};
}

void LateralMovement::traverseForward()
{
	m_powertrain.forward();
	digitalWrite(STOPLIGHT_PIN, LOW);
	digitalWrite(GOLIGHT_PIN, HIGH);
	while (true)
	{
		if (obstacleCheck())
		{
			m_powertrain.stop();
			digitalWrite(GOLIGHT_PIN, LOW);
			digitalWrite(STOPLIGHT_PIN, HIGH);
			//wait for obstacle to be removed
			while (true)
			{
				Serial.println("OBSTACLE");

				if (!obstacleCheck())
					break;
			}
		}
		m_powertrain.forward();
		digitalWrite(STOPLIGHT_PIN, LOW);
		digitalWrite(GOLIGHT_PIN, HIGH);
	}
	m_powertrain.stop();
	digitalWrite(GOLIGHT_PIN, LOW);
	digitalWrite(STOPLIGHT_PIN, HIGH);

}

void LateralMovement::traverseBackward()
{
	m_powertrain.backward();
	digitalWrite(GOLIGHT_PIN, HIGH);
	digitalWrite(STOPLIGHT_PIN, LOW);
	while (!irSensorCheck())
	{
		//playMegalovania();
		reverseBeep();
		if (obstacleCheck())
		{
			m_powertrain.stop();
			digitalWrite(GOLIGHT_PIN, HIGH);
			digitalWrite(STOPLIGHT_PIN, LOW);
			//wait for obstacle to be removed
			while (true)
			{
				Serial.println("OBSTACLE");

				if (!obstacleCheck())
					break;
			}
		}
		m_powertrain.backward();
		digitalWrite(GOLIGHT_PIN, HIGH);
		digitalWrite(STOPLIGHT_PIN, LOW);
	}
	m_powertrain.stop();
	digitalWrite(GOLIGHT_PIN, LOW);
	digitalWrite(STOPLIGHT_PIN, HIGH);
}
