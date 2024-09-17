#include "assignments.h"

//Putting it in here works?
vector<std::string> names = {};
string name_cpp[100] = {};
string name_js[50] = {};

//really dumb to do this but I want to make this look nicer I suppose haha
string course_cpp[100] = {};
string course_js[100] = {};
int rng = 0;

void runAssignmentFour() {
	assignNamesandCourse();
	//laziest moment
	cout << "-----------------------------------" << endl;
	cout << "|    Students    |    Courses     |" << endl;
	//Hard coding because i'm lazy again
	for (int i = 0; i < 100; i++) {
		cout << "|     " << name_cpp[i] << "     |      " << course_cpp[i] << "       |" << endl;
	}
	for (int i = 0; i < 50; i++) {
		cout << "|     " << name_js[i] << "     |   " << course_js[i] << "   |" << endl;
	}
	cout << "-----------------------------------" << endl;
	return;
}


void appendFirstName() {
	ifstream file("./first-names.txt");
	string name;
	if (file.is_open()) {
		while (getline(file, name)) {
			if (name.size() > 5 and name.size() < 7)
				names.push_back(name);
		}
		file.close();
	}
	else {
		cerr << "File cannot be opened." << endl;
	}
	cout << names.size() << " names has been allocated." << endl;
}

string getRandomName() {
	string temp;
	srand(rng);
	int random = rand() % (names.size() - 100 + 1) + 1;
	int random2 = rand() % (234 - 1 + 1) + 1;
	rng += (1 * (random2 / 3) + 10);
	temp = names.at(random);
	return temp;
}

void assignNamesandCourse() {
	//hard coding sucks
	for (int i = 0; i < 100; i++) {
		name_cpp[i] = { getRandomName()};
		course_cpp[i] = { "C++" };
		for (int j = 0; j < 50; j++) {
			name_js[j] = { getRandomName()};
			course_js[j] = { "JavaScript" };
		}
	}
}
