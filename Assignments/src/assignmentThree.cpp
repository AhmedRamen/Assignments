#include "assignments.h"

int rollDice(int minValue, int maxValue) {
	srand(time(NULL));

	int roll = rand() % (maxValue - minValue + 1) + minValue;
	
	return roll;
}