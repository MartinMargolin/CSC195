#include "Bird.h"
#include <fstream>

void Bird::Read(std::ifstream& istream)
{
	Animal::Read(istream);
	istream >> m_numEggs;
}

void Bird::Write(std::ofstream& ostream)
{
	Animal::Write(ostream);
	ostream << m_numEggs << std::endl;

}

