#pragma once
#include <Arduino.h>
#include <AFMotor.h>

class Powertrain
{
private:
	AF_DCMotor m_powertrainMotor;

public:
	Powertrain();

	void forward();

	void backward();

	void stop();
};
