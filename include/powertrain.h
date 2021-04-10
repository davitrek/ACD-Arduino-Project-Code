#pragma once
#include <Arduino.h>

class Powertrain
{
private:
	uint8_t m_speedPin;
	uint8_t m_forwardPin;
	uint8_t m_reversePin;

public:
	Powertrain();

	void forward(unsigned int speed);

	void backward(unsigned int speed);

	void stop();
};
