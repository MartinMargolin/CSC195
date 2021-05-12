#include <iostream>
#include "Point.h"


template<typename T>
T max(T i1, T i2)
{
	return (i1 > i2) ? i1 : i2;

}

template<typename T1, typename T2>
T1 max(T1 i1, T2 i2)
{
	return (i1 > i2) ? i1 : i2;

}
int main()
{
	Point<int> p1;
	Point<float> f1;




	std::cout << max<int>(12, 34) << std::endl;
	std::cout << max<float>(6.5f, 3.2f) << std::endl;
	std::cout << max<float, int>(6.5f, 3) << std::endl;



	std::string s1 = "hello";
	std::string s2 = "world";

	bool b = (s1 > s2);


}

