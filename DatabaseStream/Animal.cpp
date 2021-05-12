#include "Animal.h"
#include <iostream>
#include <fstream>

void Animal::Read(std::ifstream& istream)
{
	istream >> m_name;	
	istream >> m_lifespan;

}

void Animal::Write(std::ofstream& ostream)
{
	ostream << m_name << std::endl;
	ostream << m_lifespan << std::endl;
}

void Animal::Read(std::ostream& ostream, std::istream& istream)
{
	ostream << "Enter Name:";
	istream >> m_name;

	ostream << "Enter Lifespan:";
	istream >> m_lifespan;

}

void Animal::Write(std::ostream& ostream)
{
	ostream << "Name: " << m_name << std::endl;
	ostream << "Lifespan: " << m_lifespan << std::endl;
}

std::ostream& operator<<(std::ostream& ostream, Animal& animal)
{
	animal.Write(ostream);
	return ostream;

}


std::istream& operator>>(std::istream& istream, Animal& animal)
{
	animal.Read(std::cout, istream);
	return istream;
}

std::ofstream& operator<<(std::ofstream& ofstream, Animal& animal)
{
	animal.Write(ofstream);
	return ofstream;
}

std::ifstream& operator>>(std::ifstream& ifstream, Animal& animal)
{
	animal.Read(ifstream);
	return ifstream;
}


