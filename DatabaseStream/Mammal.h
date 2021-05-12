#pragma once
#include "Animal.h"
class Mammal :
    public Animal
{
public:
    eType GetType() override { return eType::Mammal; }

    void Read(std::ifstream& istream) override;
    void Write(std::ofstream& ostream) override;

protected:
    int m_numBabies = 0;
};