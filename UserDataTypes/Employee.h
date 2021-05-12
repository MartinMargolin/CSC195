#pragma once

class Employee
{
private:
	char name[32];
	int age;
	int zipcode;
	double wage;
	int daysWorked;
	int hoursWorkedPerDay[7];
	int totalHours = 0;

	double grossIncome = 0;
	double netIncome = 0;	

	static const float TAX;

public: 
		void Read();
		void Write();

};