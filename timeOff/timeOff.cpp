#include "TimeOff.h"
#include <iostream>
using namespace std;

TimeOff::TimeOff(string name, int id, double xSick, double sickT, double xVac, double vacT, double xUnpaid, double unpaidT)
{
	empName = name;
	empID = id;
	maxSickHours = xSick;
	sickTaken = sickT;
	if (xVac <= 240)
	{
		maxVacation = xVac;
	}
	else
	{
		cout << "************************************" << endl << "WARNING: Company policy prohibits more than 240 hours for vacation! Set to 240. Please talk to an admin or manager."
			<< endl << "************************************" << endl << endl;
		maxVacation = 240;
	}
	vacationTaken = vacT;
	maxUnpaid = xUnpaid;
	unpaidTaken = unpaidT;
}

void TimeOff::setMaxSickHours(double hours)
{
	maxSickHours = hours;
}

void TimeOff::setSickTaken(double hours)
{
	sickTaken = hours;
}

void TimeOff::setMaxVacation(double hours)
{
	maxVacation = hours;
}

void TimeOff::setVacTaken(double hours)
{
	vacationTaken = hours;
}
void TimeOff::setMaxUnpaid(double hours)
{
	maxUnpaid = hours;
}
void TimeOff::setUnpaidTaken(double hours)
{
	unpaidTaken = hours;
}

string TimeOff::getName()
{
	return empName;
}

int TimeOff::getID()
{
	return empID;
}

double TimeOff::getMaxSick()
{
	return maxSickHours.getHours();
}

double TimeOff::getSickTaken()
{
	return sickTaken.getHours();
}

double TimeOff::getSickTakenDays()
{
	return sickTaken.getDays();
}

double TimeOff::getMaxVacation()
{
	return maxVacation.getHours();
}

double TimeOff::getVacationTaken()
{
	return vacationTaken.getHours();
}

double TimeOff::getVacationTakenDays()
{
	return vacationTaken.getDays();
}

double TimeOff::getMaxUnpaid()
{
	return maxUnpaid.getHours();
}

double TimeOff::getUnpaidTaken()
{
	return unpaidTaken.getHours();
}

double TimeOff::getUnpaidTakenDays()
{
	return unpaidTaken.getDays();
}
