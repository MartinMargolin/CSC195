#include "Employee.h"
#include <iostream>

using namespace std;

int main()
{
	Employee Employees[5];

	unsigned short numEmployees;
	cout << "Number of employees: " << endl;
	cin >> numEmployees;

	for (int i = 0; i < numEmployees; i++)
	{
		Employees[i].Read();
	}

	for (int i = 0; i < numEmployees; i++)
	{
		Employees[i].Write();
	}
}