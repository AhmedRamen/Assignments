#include "assignments.h"

string street, city, state;
int zipcode;

void assignmentSix() {
	getline(cin, filler); //Funny hack to stop it from overriding the first input when calling this function
	cout << "What's your street name?" << endl;
	getline(cin, street);
	cout << "What's your city name?" << endl;
	getline(cin, city);
	cout << "What's your state?" << endl;
	getline(cin, state);
	while (state.length() > 2) {
		if (state.length() < 2)
			break;
		cout << "State only takes 2 letters, not more than that." << endl;
		cin >> state;
	}
	cout << "Lastly, what's your area zipcode?" << endl;
	cin >> zipcode;
	cout << "So you live in: " + street + " " + city + ", " << state << " " << zipcode;
}