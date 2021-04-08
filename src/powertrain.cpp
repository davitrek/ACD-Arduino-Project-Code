#include "../include/powertrain.h"
#include "../include/helpers.h"
#include "../include/globals.h"
#include <Arduino.h>

Powertrain::Powertrain()
	: m_speedPin{Globals::powertrainSpeedPin}, m_forwardPin{Globals::powertrainForwardPin}, m_reversePin{Globals::powertrainReversePin}
{
	pinMode(m_forwardPin, OUTPUT);
	pinMode(m_reversePin, OUTPUT);
}

void Powertrain::forward(int speed)
{
	Serial.println("forward");

	digitalWrite(m_forwardPin, HIGH);
	digitalWrite(m_reversePin, LOW);
	analogWrite(m_speedPin, toPWM(speed));
}

void Powertrain::backward(int speed)
{
	Serial.println("backward");

	digitalWrite(m_forwardPin, LOW);
	digitalWrite(m_reversePin, HIGH);
	analogWrite(m_speedPin, toPWM(speed));
}

void Powertrain::stop()
{
	Serial.println("stop");

	analogWrite(m_speedPin, 0); //speed = 0 to stop vehicle
}
