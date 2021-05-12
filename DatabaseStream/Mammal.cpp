#include "Mammal.h"
#include <fstream>
void Mammal::Read(std::ifstream& istream)
{
	Animal::Read(istream);
	istream >> m_numBabies;
}

void Mammal::Write(std::ofstream& ostream)
{
	Animal::Write(ostream);
	ostream << m_numBabies << std::endl;

}
