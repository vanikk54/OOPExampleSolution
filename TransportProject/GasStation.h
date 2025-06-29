#pragma once
#include "Car.h"
#include "Truck.h"

class GasStation
{
public:
	//...
	int calculateTotalGas(Car* cars, int sizeOfCars, Truck* truks, int sizeOfTruks);
	int total = 0;

	for (int i = 0; i < sizeOfCars; i++)
	{
		total += cars[i].tank;
	}

	for (int i = 0; i < sizeOfTruks; i++)
	{
		total += truck[i].gas;
	}

	return total;
};

