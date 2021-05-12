#include "Animal.h"
#include <iostream>
using namespace std;

int main()
{
	{}
	Animal animal;
	animal.Speak();

	Animal* pAnimal = &animal;
	pAnimal->GetLifeSpan();
	(*pAnimal).GetLifeSpan();


	Animal* pAnimal = new Animal;
	pAnimal = 
}