#include "assignments.h"

vector<string> clients;

void assigmentSeven() {
	string name;
	cout << "Give me three names." << endl;
	while (clients.size() < 3) {
		cin >> name;
		clients.push_back(name);
	}
	//I could've just commented these out but fuel > no fuel
	cout << "These three names are: ";
	for (int i = 0; i < clients.size(); i++)
		cout << clients[i] << ", ";

	cout << endl;
	cout << "The first person you inputted is: " << clients[0] << endl;
}