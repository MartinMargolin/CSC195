#include <iostream>
#include "Point.h"

void print(int x) { std::cout << x << std::endl; }
void print(float x) { std::cout << x << std::endl; }
void print(bool x) { std::cout << x << std::endl; }

rlm::Point operator + (rlm::Point& p1, rlm::Point& p2)
{
	rlm::Point point;
	p1.x += p2.x;
	p1.y += p2.y;

	return point;
}


int main()
{
	rlm::Point point1(10, 14);
	rlm::Point point2(5, 8);

	// point1.Add(point2);

	rlm::Point point3 = point1 + point2;

	//point3.Write(std::cout);

	std::cout << point3;


}