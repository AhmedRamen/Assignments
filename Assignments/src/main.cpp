#include "assignments.h"

int choice;
bool shutdown = false;


/*
int main() {
	load();
	cout << "Welcome to the main assignment hub!\n" << endl;
	
	while (true) {
		if (shutdown)
			break;
		cout << "Choose your options:" << endl;
		cout << "1. Roll the dice from one to six. (Assignment Three)\n"
				"2. Print both courses and student. (Assignment Four)\n"
				"3. Find the limit of a short and the size of both short & double data types. (Assignment Five)\n"
				"4. Answer some questions about your home address. (Assignment Six)\n"
				"5. Input three names and print the first name.	(Assignment Seven)\n"
				"6. Divide 10 by 3 using doubles. (Assignment Eight)\n"
				"7. Check if you're eligible for a job. (Assignment Nine)\n"
				"8. Calculate your sales based on commissions. (Assignment Ten)\n"
				"9. Enter two values and print the higher amount. (Assignment Eleven)\n" 
				"10. Shut down program. "																		  << endl;
		cout << "\nMUST BE A NUMBER OR IT'LL BREAK." << endl;
		cin >> choice;

		switch (choice) {
		case 1: //Assignment Three
			cout << "You rolled: " << rollDice(0, 6) << endl;
			pauseExecution();
			break;
		case 2: //Assignment Four
			runAssignmentFour();
			pauseExecution();
			break;
		case 3: //Assignment Five
			assignmentFive();
			pauseExecution();
			break;
		case 4: //Assignment Six
			assignmentSix();
			pauseExecution();
			break;
		case 5: //Assignment Seven
			assigmentSeven();
			pauseExecution();
			break;
		case 6: //Assignment Eight
			cout << "In this function, if we use int instead of double, we would get " << TeachersCode() << ". Let's replace them with doubles" << endl;
			cout << "This same function but with doubles instead of ins, we would now get " << MyCode() << ". Which is more accurate to a calculator." << endl;
			pauseExecution();
			break;
		case 7: //Assignment Nine
			assignmentNine();
			pauseExecution();
			break;
		case 8: //Assignment Ten
			assignmentTen();
			pauseExecution();
			break;
		case 9:
			assignmentEleven();
			pauseExecution();
			break;
		case 10:
			cout << "Terminating program!" << endl;
			return shutdown;
		default:
			cout << "This isn't a valid option, please choose from the selected options.";
			
			break;
		}
	}
	return 0;
}


void pauseExecution() {
#ifdef _WIN32
	system("pause");
	system("cls");
#endif // WIN32

//I don't use mac so I do not know if this even works LOL
#ifdef _MACOS
	system("read -n 1 -s -p "Press any key to continue..."; echo");
	system("clear");
#endif
}
*/
