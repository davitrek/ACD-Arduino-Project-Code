#include "../include/powertrain.h"
#include "../include/crane.h"
#include "../include/globals.h"
#include <Arduino.h>

#define DEBUG

//I'm sorry, just don't look
Powertrain powertrain{};

Crane rotate{Globals::craneRotateSpeedPin, Globals::craneRotateForwardPin, Globals::craneRotateReversePin, Globals::craneRotateSpeed, Globals::craneRotateTime};

Crane raise{Globals::craneRaiseSpeedPin, Globals::craneRaiseForwardPin, Globals::craneRaiseReversePin, Globals::craneRaiseSpeed, Globals::craneRaiseTime};

Crane deliver{Globals::craneDeliverSpeedPin, Globals::craneDeliverForwardPin, Globals::craneDeliverReversePin, Globals::craneDeliverSpeed, Globals::craneDeliverTime};

void setup()
{
	Serial.begin(9600);
}

void loop()
{

}
