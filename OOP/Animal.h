#pragma once
#include<iostream>
class Animal
{
public:
	Animal() 
	{
		m_lifespan = 0; 
		m_p = new int(30);

	}
	Animal(int lifespan) { m_lifespan = lifespan; }
	~Animal()
	{
		std::cout << "Destructor" << std::endl;
		delete m_p;
	}
	void Speak();

	int GetLifeSpan() { return m_lifespan; }

	void SetLifeSpan(int lifespan) { m_lifespan = lifespan; }

protected:
	int m_lifespan = 5;
	int* m_p = nullptr;
};