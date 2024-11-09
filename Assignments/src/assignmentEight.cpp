#include "assignments.h"

//Teacher's code
int TeachersCode() {
	int x = 10;
	int y = 3;
	double z = x / y;
	return z;
}

//My code
double MyCode() {
	//Replace the ints with doubles
	double x = 10;
	double y = 3;
	double z = x / y;
	
	return z;
}

int main() {
	cout << "In this function, if we use int instead of double, we would get " << TeachersCode() << ". Let's replace them with doubles" << endl;
	cout << "This same function but with doubles instead of ins, we would now get " << MyCode() << ". Which is more accurate to a calculator." << endl;
}