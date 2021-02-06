#pragma once
class NumDays // for storing hours and days off of work
{
private:
	double totalHours; // stores the hours
	double totalDays; // stores the days

public:
	NumDays(double); // constructor if provided the hours
	NumDays(); // default constructor

	void setHours(double); // set the hours
	void hoursToDays(double); // auto-converts hours to days

	double getHours(); // return hours
	double getDays(); // return days
	
	double operator+(NumDays); // overloaded +; adds hours together
	double operator-(NumDays); // overloaded -; adds hours together
	void operator++(); // PREFIX; increment hours by 1
	void operator++(int); // POSTFIX; increment hours by 1
	void operator--(); // PREFIX; decrement hours by 1
	void operator--(int); // POSTFIX; decrement hours by 1
};

