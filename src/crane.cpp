#include "../include/crane.h"
#include "../include/helpers.h"
#include <Arduino.h>

Crane::Crane(uint8_t speedPin, uint8_t forwardPin, uint8_t reversePin, int rotationSpeed, int rotationTime)
	: m_speedPin{speedPin}, m_forwardPin{forwardPin}, m_reversePin{reversePin}, m_rotationSpeed{rotationSpeed}, m_rotationTime{rotationTime}
{
	pinMode(m_forwardPin, OUTPUT);
	pinMode(m_reversePin, OUTPUT);
}

void Crane::begin()
{
	Serial.println("beginning");
	digitalWrite(m_forwardPin, HIGH);
	digitalWrite(m_reversePin, LOW);
	analogWrite(m_speedPin, toPWM(m_rotationSpeed));

	delay(m_rotationTime);

	Serial.println("turn complete");
	analogWrite(m_speedPin, 0); //stops rotation when done
}

void Crane::reset()
{
	Serial.println("resetting");
	digitalWrite(m_forwardPin, LOW);
	digitalWrite(m_reversePin, HIGH);
	analogWrite(m_speedPin, toPWM(m_rotationSpeed));

	delay (m_rotationTime);

	Serial.println("resetting complete");
	analogWrite(m_speedPin, 0); //stops rotation when reset
}
