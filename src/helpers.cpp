#include "../include/helpers.h"
#include <Arduino.h>

int toPWM(int input)
{
	return (input * 255 / 100);
}
