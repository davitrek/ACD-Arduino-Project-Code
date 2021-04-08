#pragma once
#include <Arduino.h>

class Crane
{
private:
	uint8_t m_speedPin;
	uint8_t m_forwardPin;
	uint8_t m_reversePin;

	int m_rotationSpeed;
	int m_rotationTime;

public:
	Crane(uint8_t speedPin, uint8_t forwardPin, uint8_t reversePin, int rotationSpeed, int rotationTime);

	void begin();

	void reset();
};
