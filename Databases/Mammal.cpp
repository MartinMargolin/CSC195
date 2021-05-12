#include "Mammal.h"

void Mammal::Read(std::ostream& ostream, std::istream& istream)
{
	Animal::Read(ostream, istream);
	ostream << "Enter number of babies:";
	istream >> m_numBabies;
}

void Mammal::Write(std::ostream& ostream)
{
	Animal::Write(ostream);
	ostream << "Number of babies:" << m_numBabies << std::endl;

}
