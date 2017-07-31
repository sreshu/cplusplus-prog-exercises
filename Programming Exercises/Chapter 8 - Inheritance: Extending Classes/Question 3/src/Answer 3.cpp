/*
 * Answer 3.cpp
 * Author: suyashd95
 */

#include "Teacher.h"
#include "Officer.h"
#include "Regular.h"
#include "Casual.h"

using namespace std;

void runTeacher();
void runOfficer(int);
void runRegular(int);
void runCasual(int);

int main() {

	bool exit = false;

	do {

		cout << setw(50) <<"=====Educational Institute Database=====\n" << endl;
		int op;
		cout << "1. Teacher\t2. Officer\n3. Regular\t4. Casual\n5. Exit" << endl;
		cout << "Enter the number corresponding to your choice: " << flush;
		cin >> op;
		cout << endl;

		enum {teacher = 1, officer, regular, casual, terminate};

		switch(op) {

		case teacher:
		{
			runTeacher();
			break;
		}
		case officer:
		{
			cout << setw(30) << "<----Officer Options---->" << endl;

			cout << "\n1. Enter the details of an officer." << endl;
			cout << "2. Display details of an officer." << endl;
			cout << "3. Return to the previous menu." << endl;
			cout << "Enter the number corresponding to your choice: " << flush;
			int oMenu;
			cin >> oMenu;
			cout << endl;
			runOfficer(oMenu);

			break;
		}
		case regular:
		{
			cout << setw(30) << "<----Regular Options---->" << endl;

			cout << "\n1. Enter the details of a regular." << endl;
			cout << "2. Display details of a regular." << endl;
			cout << "3. Return to the previous menu." << endl;
			cout << "Enter the number corresponding to your choice: " << flush;
			int rMenu;
			cin >> rMenu;
			cout << endl;
			runRegular(rMenu);

			break;
		}
		case casual:
		{
			cout << setw(30) << "<----Casual Options---->" << endl;

			cout << "\n1. Enter the details of a casual." << endl;
			cout << "2. Display the details of a casual." << endl;
			cout << "3. Return to the previous menu." << endl;
			cout << "Enter the number corresponding to your choice: " << flush;
			int cMenu;
			cin >> cMenu;
			cout << endl;
			runCasual(cMenu);

			break;
		}
		case terminate:
		{
			cout << "Program has been successfully terminated." << endl;
			exit = true;
			break;
		}
		default:
		{
			cout << "ERROR: Invalid Choice. Please choose a valid option (1-5)." << endl;
			break;
		}
		}

	} while(exit != true);

	return 0;
}

void runTeacher() {

	Teacher t;
	bool exit = false;
	do {

		cout << setw(30) << "<----Teacher Options---->" << endl;
		cout << "\n1. Enter the details of a teacher." << endl;
		cout << "2. Display details of a teacher." << endl;
		cout << "3. Return to the previous menu." << endl;
		cout << "Enter the number corresponding to your choice: " << flush;
		int op;
		cin >> op;
		cout << endl;

		enum {input = 1, display, ret};
		switch(op) {

		case input:
			cout << "Entering the details of a teacher...\n" << endl;
			t.input();
			break;

		case display:
			cout << "Displaying the details of a teacher...\n" << endl;
			t.display();
			break;

		case ret:
			cout << "Returning to the Main Menu..." << endl;
			exit = true;
			break;

		default:
			cout << "ERROR: Invalid Choice. Please choose a valid option (1-3)." << endl;
			break;
		}

		cout << endl;
	} while(exit != true);
}

void runOfficer(int op) {

	cout << "Running Officer" << endl;
}

void runRegular(int op) {

	cout << "Running Regular" << endl;
}

void runCasual(int op) {

	cout << "Running Casual" << endl;
}
