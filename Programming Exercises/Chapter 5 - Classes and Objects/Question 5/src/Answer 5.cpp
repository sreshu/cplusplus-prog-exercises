/*
 * Answer 5.cpp
 * Author: suyashd95
 */

#include <iostream>

#include "DB.h"
#include "DM.h"

using namespace std;

void addDistance(const DB&, const DM&);

int main() {

	DB db;

	int feet, inches;
	cout << "Enter the distance in feet and inches respectively: " << flush;
	cin >> feet;
	cin >> inches;

	db.setDistance(feet, inches);
	db.displayDistance();

	DM dm;

	int meters, centimeters;
	cout << endl;
	cout << "Enter the distance in meters and centimeters respectively: " << flush;
	cin >> meters;
	cin >> centimeters;

	dm.setDistance(meters, centimeters);
	dm.displayDistance();

	cout << endl;
	addDistance(db, dm);

	return 0;
}

void addDistance(const DB& db, const DM& dm) {

	cout << "Choose the format in which the total distance needs to be displayed..." << endl;
	cout << "1. In feet and inches\t2. In meters and centimeters\nPress the number corresponding to your choice: " << flush;
	int op;
	cin >> op;

	cout << endl;
	switch(op) {

	case 1:
	{
		int totalCentimeters = (dm.getMeters() * 100) + dm.getCentimeters();
		int centimetersToInches = totalCentimeters * 0.394;

		DB db2;
		db2.setDistance(centimetersToInches / 12, centimetersToInches % 12);

		break;
	}
	case 2:
	{

		int totalInches = (db.getFeet() * 12) + db.getInches();
		int inchesToCentimeters = totalInches * 2.54;

		DM dm2;
		dm2.setDistance(inchesToCentimeters / 100, inchesToCentimeters % 100);

		break;
	}
	default:

		cout << "Invalid option." << endl;
		break;
	}
}


