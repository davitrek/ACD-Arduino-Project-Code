#pragma once
#include <Arduino.h>
#include <AFMotor.h>

class Crane
{
private:
	AF_DCMotor m_motor;
	int m_rotationSpeed;
	int m_rotationTime;
	int m_rotationResetTime;
	int m_rotationResetSpeed;

public:
	Crane(int motorNum, int rotationSpeed, int rotationTime, int rotationResetSpeed, int rotationResetTime);

	//begins crane component action
	void begin();

	//undoes begin() action
	void reset();
};
