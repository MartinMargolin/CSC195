#pragma once
#include <iostream>
class Animal
{
public:
	enum class eType
	{
		Bird = 1,
		Mammal = 2
	};

public:
	std::string GetName() { return m_name; }
	virtual eType GetType() = 0;


	virtual void Read(std::ostream& ostream, std::istream& istream);
	virtual void Write(std::ostream& ostream);

	virtual void Read(std::ifstream& ifstream);
	virtual void Write(std::ofstream& ofstream);

	friend std::istream& operator >> (std::istream& istream, Animal& animal);
	friend std::ostream& operator << (std::ostream& ostream, Animal& animal);


	friend std::ifstream& operator >> (std::ifstream& ifstream, Animal& animal);
	friend std::ofstream& operator << (std::ofstream& ofstream, Animal& animal);


protected:
	std::string m_name;
	int m_lifespan = 0;
};



