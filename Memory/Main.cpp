#include <iostream>

using namespace std;



void set(int& i)
{
	i = 123;
	cout << &i << endl;
}

void swap(int& i1, int& i2)
{
	int temp = i1;
	i1 = i2;
	i2 = temp;
}

void swap(int* i1, int* i2)
{
	int temp = *i1;
	*i1 = *i2;
	*i2 = temp;
}

void memory(int size)
{
	new char[0xFFFFFF];	
	size = size + 0xFFFF;
	cout << size << endl;
	memory(size);
}
int main()
{

	
	/*
	int i1 = 10;
	int i2 = 20;

	int& r = i1;
	r = 40;

	int* p = nullptr;
	p = &i1;




	set(i1);
	swap(&i1, &i2);
	cout << i1 << endl;
	cout << &i1 << endl;           // & is address , * is pointer, *p used to dereference 
	cout << &r << endl;
	cout << p << endl;
	cout << *p << endl;


	*/
	{
		int* p1 = new int(20);
		*p1 = 10;
		cout << p1 << endl;
		cout << *p1 << endl;
		delete p1;
	}

	int* p2 = new int[5]{ 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; i++)
	{
		cout << p2[i] << endl;
	}
	delete p2;
}
