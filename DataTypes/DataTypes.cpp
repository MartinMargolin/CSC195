

#include <iostream>
using namespace std;
int main()
{
    string name;
    string initial;
    int age;
    bool isAdult;
    int zipcode;
    double wage;
    int daysWorked;
    int hoursWorkedPerDay[7];
    const float TAX = 0.1f;
    int totalHours = 0;
    double grossIncome;
    double netIncome;


    cout << "Enter first name: ";
    cin >> name;

    cout << endl << "Enter last initial: ";
    cin >> initial;

    cout << endl << "Enter age: ";
    cin >> age;
    if (age <= 18)
    {
        isAdult = true;
    }
    else
    {
        isAdult = false;
    }

    cout << endl << "Enter zipcode: ";
    cin >> zipcode;

    cout << endl << "Enter wage (without $): ";
    cin >> wage;

    cout << endl << "Enter weekly days worked: ";
    cin >> daysWorked;

    for (int i = 0; i < daysWorked; i++)
    {
        cout << "enter hours worked for day " << i + 1 << ": ";
        cin >> hoursWorkedPerDay[i];
        totalHours = hoursWorkedPerDay[i] + totalHours;


    }

    grossIncome = totalHours * wage;

    netIncome = grossIncome - grossIncome * TAX;

    cout << endl << name << " " <<" worked " << totalHours << " hours at $" << wage << " an hour. " << endl;
    cout << "Gross Income: " << grossIncome << endl;
    cout << "Net Income: " << netIncome << endl;




    
}

