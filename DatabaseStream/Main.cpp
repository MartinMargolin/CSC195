
#include <iostream>
#include "Database.h"
using namespace std;

int main()
{
	Database database;
	bool quit = false;
	while (!quit)
	{
		std::cout << "1) Add\n";
		std::cout << "2) Dislay All\n";
		std::cout << "3) Display Name\n";
		std::cout << "4) Display Type\n";
		std::cout << "5) Load\n";
		std::cout << "6) Save\n";
		std::cout << "7) Quit\n\n";

		std::cout << "Enter Selection:";
		int selection;
		std::cin >> selection;

		switch (selection)
		{
		case 1:
			int select;
			std::cout << "Select 1) Bird || 2) Mammal" << endl;
			cin >> select;
			switch (select)
			{
			case 1:
				database.Add(Animal::eType::Bird);
				break;
			case 2:
				database.Add(Animal::eType::Mammal);
				break;

			}
			break;
		case 2:
			database.DisplayAll();
			break;
		case 3:
		{
			std::cout << "Enter Name:";
			std::string name;
			std::cin >> name;

			database.Display(name);
		}

		break;
		case 4:
		
			std::cout << "1) Bird\n";
			std::cout << "2) Mammal\n";
			int type;
			std::cin >> type;

			database.Display(static_cast<Animal::eType>(type));
		
		break;
		case 5:
		{
		std::cout << "enter filename: ";
			std::string name;
			std::cin >> name;
			database.Load(name);

		}
			break;

		case 6:
			
		{
			std::cout << "enter filename: ";
			std::string name;
			std::cin >> name;
			database.Save(name);

		}
			break;
		case 7:
			quit = true;
			break;

		}
	}
}