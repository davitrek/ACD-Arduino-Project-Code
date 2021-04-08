#pragma once
#include <Arduino.h>

//PLEASE SET OR NOTHING WILL WORK

//Speed pin defines EN-connected pin
//Forward, reverse pin define respective input-connected pins

//Speed defines how quickly the respective motor will rotate (in %)
//Time defines how long the respective motor will be rotating for (in ms)
	//The above two are expected to be the same for every single repetition of the program

namespace Globals
{
	constexpr uint8_t powertrainSpeedPin{}, powertrainForwardPin{}, powertrainReversePin{};

	constexpr uint8_t craneRotateSpeedPin{}, craneRotateForwardPin{}, craneRotateReversePin{};
	constexpr int craneRotateSpeed{}, craneRotateTime{};

	constexpr uint8_t craneRaiseSpeedPin{}, craneRaiseForwardPin{}, craneRaiseReversePin{};
	constexpr int craneRaiseSpeed{}, craneRaiseTime{};

	constexpr uint8_t craneDeliverSpeedPin{}, craneDeliverForwardPin{}, craneDeliverReversePin{};
	constexpr int craneDeliverSpeed{}, craneDeliverTime{};
}
