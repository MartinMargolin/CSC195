#include "Employee.h"
#include <iostream>

using namespace std;

const float Employee::TAX = 0.1f;


	void Employee::Read()
	{
		cout << "Enter first name" << endl;
		cin >> name;
		cout << "Enter age" << endl;
		cin >> age;
		cout << "Enter zipcode" << endl;
		cin >> zipcode;
		cout << "Enter wage" << endl;
		cin >> wage;
		cout << "Enter days worked" << endl;
		cin >> daysWorked;
		for (int i = 0; i < daysWorked; i++)
		{
			cout << "Enter hours for day " << i + 1 << endl;
			cin >> hoursWorkedPerDay[i];
		}
		for (int i = 0; i < daysWorked; i++)
		{
			totalHours = hoursWorkedPerDay[i] + totalHours;
		}

		grossIncome = totalHours * wage;
		netIncome = grossIncome - (grossIncome * TAX);
	

	}

	void Employee::Write()
	{
		cout << endl << name << " " << " worked " << totalHours << " hours at $" << wage << " an hour. " << endl;
		cout << "Gross Income: " << grossIncome << endl;
		cout << "Net Income: " << netIncome << endl;

	}
