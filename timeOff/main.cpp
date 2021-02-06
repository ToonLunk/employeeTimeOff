// timeOff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/* THIS PROGRAM WAS WRITTEN COMPLETELY FROM SCRATCH, By Tyler (Chase) Brock, on Feb. 5th, 2021; with the exception of the george test code,
found in main(). The extra "chase" object was created by me to show the extra code written (overloaded operators, etc)*/

#include <iostream>
#include "NumDays.h" // link to header file of class NumDays
#include "TimeOff.h" // link to header file of class TimeOff
using namespace std;

int main()
{
	/*TEST CODE FROM CHAPTER*/

	// format: 1. empName, 2. empID, 3. Max Sick Time, 4. Sick Time Taken,
	// 5. Max Vacation, 6. Vacation Taken, 7. Max Unpaid Hours, 8. Unpaid Hours Taken
	TimeOff george("George Smith", 1423, 80, 40, 250, 100, 200, 8);

	cout << "Name: " << george.getName() << endl;
	cout << "ID: " << george.getID() << endl << endl;

	cout << "Max Sick Hours: " << george.getMaxSick() << endl;
	cout << "Sick Hours taken: " << george.getSickTaken() << endl;
	cout << "Sick Days taken: " << george.getSickTakenDays() << endl << endl;

	cout << "Max Vacation Hours: " << george.getMaxVacation() << endl;
	cout << "Vacation Hours taken: " << george.getVacationTaken() << endl;
	cout << "Vacation Days taken: " << george.getVacationTakenDays() << endl << endl;

	cout << "Max Unpaid Hours: " << george.getMaxUnpaid() << endl;
	cout << "Unpaid Hours taken: " << george.getUnpaidTaken() << endl;
	cout << "Unpaid Days taken: " << george.getUnpaidTakenDays() << endl;

	cout << endl << "********************" << endl << "END OF EMPLOYEE FILE" << endl << "********************" << endl << endl;

	TimeOff chase("Chase Brock", 499, 75, 40, 200, 90, 200, 8);

	cout << "Name: " << chase.getName() << endl;
	cout << "ID: " << chase.getID() << endl << endl;

	cout << "Max Sick Hours: " << chase.getMaxSick() << endl;
	cout << "Sick Hours taken: " << chase.getSickTaken() << endl;
	cout << "Sick Days taken: " << chase.getSickTakenDays() << endl << endl;

	cout << "Max Vacation Hours: " << chase.getMaxVacation() << endl;
	cout << "Vacation Hours taken: " << chase.getVacationTaken() << endl;
	cout << "Vacation Days taken: " << chase.getVacationTakenDays() << endl << endl;

	cout << "Max Unpaid Hours: " << chase.getMaxUnpaid() << endl;
	cout << "Unpaid Hours taken: " << chase.getUnpaidTaken() << endl;
	cout << "Unpaid Days taken: " << chase.getUnpaidTakenDays() << endl << endl;

	cout << "Sick hours LEFT: " << chase.getMaxSick() - chase.getSickTaken() << endl;

	cout << "Vacation Hours LEFT: " << chase.getMaxVacation() - chase.getVacationTaken() << endl;

	cout << "Unpaid Hours LEFT: " << chase.getMaxUnpaid() - chase.getUnpaidTaken() << endl << endl;

	cout << "All off time (sick, vacation, unpaid vacation) hours LEFT: " << (chase.getMaxSick() - chase.getSickTaken()) +
		(chase.getMaxVacation() - chase.getVacationTaken()) + (chase.getMaxUnpaid() - chase.getUnpaidTaken()) << endl;

	cout << endl << "********************" << endl << "END OF EMPLOYEE FILE" << endl << "********************" << endl << endl;
}