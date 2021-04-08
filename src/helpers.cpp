#include "../include/helpers.h"
#include <Arduino.h>

//takes a percentage and returns the PWM equivalent
int toPWM(int input)
{
	return (input * 255 / 100);
}
