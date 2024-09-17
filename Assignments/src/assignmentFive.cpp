#include "assignments.h"

void assignmentFive() {
	short int short_min = -1, short_max = 0;
	double double_min = -1, double_max = 0;

	cout << "the size of a short has: " << sizeof(short) << " bytes." << endl;
	while (short_max > short_min) {
		short_min++;
		short_max++;
	}
	cout << "the minimum and maximum limit of a short is:\nmin: " << short_min << "\nmax: " << short_max << endl;
	cout << "the size of a double is: " << sizeof(double) << " bytes." << endl;
	cout << "the minimum and maximum limit of a double is infinity." << endl;
}