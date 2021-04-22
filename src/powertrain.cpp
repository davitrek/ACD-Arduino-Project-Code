#include "../include/powertrain.h"
#include "../include/helpers.h"
#include "../include/globals.h"
#include <Arduino.h>
#include <AFMotor.h>

Powertrain::Powertrain()
	: m_powertrainMotor{POWERTRAIN_MOTOR}
{
}

void Powertrain::forward()
{
	Serial.println("forward");
	m_powertrainMotor.setSpeed(toPWM(POWERTRAIN_FOR_SPEED));
	m_powertrainMotor.run(FORWARD);
}

void Powertrain::backward()
{
	Serial.println("backward");
	m_powertrainMotor.setSpeed(toPWM(POWERTRAIN_REV_SPEED));
	m_powertrainMotor.run(BACKWARD);
}

void Powertrain::stop()
{
	Serial.println("stop");
	m_powertrainMotor.setSpeed(0);
}
