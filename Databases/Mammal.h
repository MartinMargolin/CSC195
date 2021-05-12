#pragma once
#include "Animal.h"
class Mammal :
    public Animal
{
public:
    eType GetType() override { return eType::Mammal; }

    void Read(std::ostream& ostream, std::istream& istream) override;
    void Write(std::ostream& ostream) override;

protected:
    int m_numBabies = 0;
};

