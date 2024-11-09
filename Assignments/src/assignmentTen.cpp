#include "assignments.h"

double commission;
double percentage;
double result;

void assignmentTen() {
	cout << "How much did you make from sales?" << endl;
	cin >> commission;
	setPercentage();
	result = percentage * commission;
	cout << "The sale you made is: " << commission << endl
		 << "You were commissioned: " << percentage << "%" << endl
		 << "Your total sales made is: " << result << "$" << endl;
}

double setPercentage() {
	if (commission <= 10000)
		return percentage = 0.10;
	else if (commission >= 10000 and commission <= 15000)
		return percentage = 0.15;
	else
		return percentage = 0.20;
}

int main() {
	assignmentTen();
}