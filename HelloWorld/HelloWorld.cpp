

#include <iostream>
using namespace std;

namespace maple
{
    void print()
    {

    }
}

int main()
{
    maple::print(); // overridden print function called from the namespace "maple"
    cout << "Hello World!\n";
    cout << "Change";

    cout << "Enter Age: ";
    int age;
    cin >> age; 
    cout << " Age : " << age << endl;
}