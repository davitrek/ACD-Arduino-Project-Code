#include "../include/crane.h"
#include "../include/helpers.h"
#include <Arduino.h>
#include <AFMotor.h>
#include <Servo.h>

Crane::Crane(int motorNum, int rotationSpeed, int rotationTime, int rotationResetSpeed, int rotationResetTime)
	: m_motor{motorNum},
	m_rotationSpeed{rotationSpeed},
	m_rotationTime{rotationTime},
	m_rotationResetSpeed{rotationResetSpeed},
	m_rotationResetTime{rotationResetTime}
{
}

void Crane::begin()
{
	Serial.println("beginning");
	m_motor.setSpeed(toPWM(m_rotationSpeed));
	m_motor.run(FORWARD);

	delay(m_rotationTime);

	m_motor.setSpeed(0); //stop motor once turn is complete
	Serial.println("turn complete");
}

void Crane::reset()
{
	Serial.println("resetting");
	m_motor.setSpeed(toPWM(m_rotationResetSpeed));
	m_motor.run(BACKWARD);

	delay (m_rotationResetTime);

	m_motor.setSpeed(0); //stops rotation when reset
	Serial.println("resetting complete");
}

void operateServo()
{
	Servo servo;
	servo.attach(9);
	servo.write(180);
	delay(10000);
	servo.write(80);
	delay(5000);
	servo.write(180);
	delay(1000);
}
