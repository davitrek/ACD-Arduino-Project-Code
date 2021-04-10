#include "../include/powertrain.h"
#include "../include/helpers.h"
#include "../include/globals.h"
#include <Arduino.h>

Powertrain::Powertrain()
{
	pinMode(POWERTRAIN_FOR_PIN, OUTPUT);
	pinMode(POWERTRAIN_REV_PIN, OUTPUT);
}

void Powertrain::forward(unsigned int speed)
{
	Serial.println("forward");

	digitalWrite(POWERTRAIN_FOR_PIN, HIGH);
	digitalWrite(POWERTRAIN_REV_PIN, LOW);
	analogWrite(POWERTRAIN_SPEED_PIN, toPWM(speed));
}

void Powertrain::backward(unsigned int speed)
{
	Serial.println("backward");

	digitalWrite(POWERTRAIN_FOR_PIN, LOW);
	digitalWrite(POWERTRAIN_REV_PIN, HIGH);
	analogWrite(POWERTRAIN_SPEED_PIN, toPWM(speed));
}

void Powertrain::stop()
{
	Serial.println("stop");

	analogWrite(POWERTRAIN_SPEED_PIN, 0); //speed = 0 to stop vehicle
}
