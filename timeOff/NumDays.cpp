#include "NumDays.h"
#include <iostream>
using namespace std;

NumDays::NumDays(double hours)
{
	totalHours = hours;
	hoursToDays(totalHours);
}

NumDays::NumDays() // constructor if nothing is given
{
	totalHours = 0;
	totalDays = 0;
}

void NumDays::setHours(double hours) // sets the hours
{
	totalHours = hours;
}

void NumDays::hoursToDays(double hours) // converts from hours to days
{
	totalDays = hours / 8;
}

double NumDays::getHours() // gets the hours
{
	return totalHours;
}
double NumDays::getDays() // gets the days
{
	return totalDays;
}

double NumDays::operator+(NumDays otherHours) // accept hours from a different day
{
	double addedHours;
	addedHours = totalHours + otherHours.totalHours;
	return addedHours;
}

double NumDays::operator-(NumDays otherHours) // accept hours from a different day
{
	double addedHours;
	addedHours = totalHours - otherHours.totalHours;
	return addedHours;
}

void NumDays::operator++() // PREFIX increment
{
	totalHours +=1;
	hoursToDays(totalHours);
}

void NumDays::operator++(int) //POSTFIX increment
{
	totalHours += 1;
	hoursToDays(totalHours);
}

void NumDays::operator--() // PREFIX decrement
{
	totalHours -= 1;
	hoursToDays(totalHours);
}

void NumDays::operator--(int) // POSTFIX decrement
{
	totalHours -= 1;
	hoursToDays(totalHours);
}
