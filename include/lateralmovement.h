#pragma once
#include "../include/powertrain.h"
#include <Arduino.h>

//enum class DirectionCorrection

class LateralMovement
{
private:
	Powertrain m_powertrain;

	unsigned long obstacleDistance();

	//checks for obstacles, returns true if obstacle is detected
	bool obstacleCheck();

	//checks IR sensor, returns true if IR source is detected
	bool irSensorCheck();

	//checks vehicle is on path, returns true if vehicle is on path
	//bool lineCheck();

	//detects needed corrections, returns DirectionCorrection that conveys this
	//DirectionCorrection lineCorrection();

public:
	LateralMovement();

	//moves vehicle from pickup to dropoff, safety checks built-in
	void traverseForward();
};
