#include <iostream>
using namespace std;

struct Person
{
	char name[32];
	int id;
};

void Square(int& value)
{
	value = value * value;
	
}

void Double(int* pointer)
{
	*pointer = *pointer + 2;
}
int main()
{
	// ** REFERENCE **
	// 
	// declare an int variable and set the value to some number (less than 10)
	
	int i = 5;
	// declare a int reference and set it to the int variable above
	int& num = i;
	// output the int variable
	cout << i << endl;
	// set the int reference to some number
	num = 4;
	// output the int variable
	cout << i << endl;
	// what happened to the int variable when the reference was changed? (insert answer)
	//
	// A: since num is referenced to i, i is the variable changed since 'num' is just an alias. 
	// 
	// 
	// output the address of the int variable
	
	cout << &i << endl;
	// output the address of the int reference
	
	cout << &num << endl;
	// are the addresses the same or different? (insert answer)

	// A: They are the same since they both end up in the same place

	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter (i = i * i)
	// call the Square function with the int variable created in the REFERENCE section

	Square(i);

	// output the int variable to the console

	cout << i << endl;

	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	
	// done
	
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""

	// done

	// ** POINTER VARIABLE **
	// 
	// declare an int pointer, set it to nullptr (it points to nothing)
	// set the int pointer to the address of the int variable created in the REFERENCE section

	int* pointer = nullptr;

	pointer = &i;
		
	// output the value of the pointer
	// 
	cout << pointer << endl;
	// what is this address that the pointer is pointing to? (insert answer)
	//
	// 	   A: The address of the original int
	//
	// 
	// output the value of the object the pointer is pointing to (dereference the pointer)

	cout << *pointer << endl;

	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter (i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the Double function with the pointer created in the POINTER VARIABLE section
	Double(pointer);
	
	// output the dereference pointer
	// 
	cout << *pointer << endl;
	// output the int variable created in the REFERENCE section
	// 
	cout << i << endl;
	// did the int variable's value change when using the pointer?

	// A: Yes both changed to 18



	// ** ALLOCATION/DEALLOCATION **
	//
	// create an int pointer that points at an int allocated on the heap, set the allocated int value to some number
	int* ptr = new int{ 1 };

	// output the pointer value, this should be the address of the int allocated on the heap
	
	cout << ptr << endl;
	// output the dereference pointer
	// 
	cout << *ptr << endl;
	// deallocate the int pointer to free up the memory

	delete ptr; 

	// create an int pointer that points at an array of ints allocated on the heap, the array size should be 4-6
	// 
	
	int* ptr2 = new int[4];

	// use a for loop and set each int in the array to a random number (use => rand() % 10 to get a random number
	// 
	for (int i = 0; i < 4; i++)
	{
		ptr2[i] = rand() % 10;
	}
	// use a for loop and output each of the ints in the array
	// 
	for (int i = 0; i < 4; i++)
	{
		cout << ptr2[i] << endl;
	}
	// use a for loop and output the address of each of the ints in the array
	
	for (int i = 0; i < 4; i++ )
	{
		cout << &ptr2[i] << endl;
	}
	// deallocate the int pointer to free up the memory block (remember it's an array)
	delete ptr2;
	// ** STRUCTURE **
	//
	// create a Person pointer that points at an array of Persons allocated on the heap, the array size should be 2
	// read in a name from the console and set it to the person name, do this for the id also, do this for both Persons
	Person* person = new Person[2];
	cout << "Please enter first person's name:" << endl;
	cin >> person[0].name;
	cout << "Please enter first person's id #" << endl;
	cin >> person[0].id;

	cout << "Please enter second person's name:" << endl;
	cin >> person[1].name;
	cout << "Please enter seconds person's id #" << endl;
	cin >> person[1].id;
	
	// use a for loop and output the name and id of each person in the array 
	
	for (int i = 0; i < 2; i++)
	{
		cout << person[i].name << endl;
		cout << person[i].id << endl;
	}

	// deallocate the person pointer to free up the memory block (remember it's an array)

	delete person;
}