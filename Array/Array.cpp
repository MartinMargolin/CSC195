#include "Array.h"

#include <array>



typedef unsigned int size_t;
/*
arr::array::array()
{
}

arr::array::array(const std::initializer_list<int>& ilist)
{
	size_t i = 0;
	for (auto iter = ilist.begin(); iter != ilist.end(); iter++)
	{
		m_elements[i] = *iter;
		i++;
	}
}

int& arr::array::operator[](size_t position)
{

	return m_elements[position];

}

const int& arr::array::operator[](size_t position) const
{

	return m_elements[position];

}

int& arr::array::at(size_t position)
{

	return m_elements[position];

}

const int& arr::array::at(size_t position) const
{
	
	return m_elements[position];

}

int& arr::array::front()
{

	return m_elements[0];

}

int& arr::array::back() 
{

	return m_elements[size() - 1];

}

int* arr::array::data()
{
	return m_elements;
}

void arr::array::fill(int value)
{
	for (size_t i = 0; i < m_size; i++)
	{
		m_elements[i] = value;
	}
	
}

void arr::array::swap(array& other)
{
	for (size_t i = 0; i < m_size; i++)
	{
		arr::array temp;
			temp[i] = m_elements[i];
		m_elements[i] = other.m_elements[i];
			other.m_elements[i] = temp[i];
	}

}

bool arr::array::empty() const
{
	return m_size == 0;
}

size_t arr::array::size() const
{
	return m_size;
}	

*/