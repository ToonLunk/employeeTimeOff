#pragma once

#include "NumDays.h"
#include <string>
using namespace std;



class TimeOff // class to hold info about employees
{
private:
	string empName; // employee name
	int empID; // employee ID #

public:

	TimeOff(string, int, double, double, double, double, double, double); // constructor

	NumDays maxSickHours; // create objects as required
	NumDays sickTaken;
	NumDays maxVacation;
	NumDays vacationTaken; 
	NumDays maxUnpaid;
	NumDays unpaidTaken;
	
	// initialize setters
	void setMaxSickHours(double);
	void setSickTaken(double);
	void setMaxVacation(double);
	void setVacTaken(double);
	void setMaxUnpaid(double);
	void setUnpaidTaken(double);
	
	// initialize getters
	string getName();
	int getID();
	double getMaxSick();
	double getSickTaken();
	double getSickTakenDays();
	double getMaxVacation();
	double getVacationTaken();
	double getVacationTakenDays();
	double getMaxUnpaid();
	double getUnpaidTaken();
	double getUnpaidTakenDays();
};

