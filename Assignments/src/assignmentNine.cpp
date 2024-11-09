#include "assignments.h"

char answer;
bool yesno = false;
const string usa = "united states";
void assignmentNine() {
	string name = getRandomName();
	string country;
	getline(cin, filler); //Funny hack to stop it from overriding the first input when calling this function
	cout << "Where do you come from, " << name << "?" << endl;
	getline(cin, country);
	if (country.compare(usa) == 0) {
		BachelorsDegree();
	}
	else if (country.compare(usa) != 0) {
		cout << "Are you a permanment resident of the United States of America? (Y/N)" << endl;
		yesOrNo();
		if (yesno) {
			BachelorsDegree();
		}
		else {
			cout << "I'm sorry, you aren't eligible for a job." << endl;
			return;
		}
	}
	else {
		cout << "I'm sorry, you aren't eligible for a job." << endl;
		return;
	}
}

void BachelorsDegree() {
	cout << "Do you have a bachelor's degree? (Y/N)" << endl;
	yesOrNo();
	if (yesno) {
		cout << "You are eligible for a job." << endl;
		return;
	}
	else {
		cout << "Oh. Well do you at least have a two year job experience? (Y/N)" << endl;
		yesOrNo();
		if (yesno) {
			cout << "You may be eligible for a job, but there's a chance people may not hire you." << endl;
			return;
		}
		else {
			cout << "I'm sorry, you aren't eligible for a job." << endl;
			return;
		}
	}
}

char yesOrNo() {
	while (tolower(answer) != 'y' or 'n') {
		cin >> answer;
		if (tolower(answer) == 'y') {
			yesno = true;
			break;
		}
		else if (tolower(answer) == 'n') {
			yesno = false;
			break;
		}
		cout << "Y/N." << endl;
	}
	return yesno;
}

int main() {
	load();
	assignmentNine();
}