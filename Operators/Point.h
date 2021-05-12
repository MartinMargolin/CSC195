#pragma once
#include <iostream>

namespace rlm
{
	class Point
	{
	public:
		Point() : x{ 0 }, y{ 0 } {}
		Point(float x, float y) : x{ x }, y{ y } {}


	
		void Write(std::ostream& ostream);
		void Add(Point& Point);

		Point operator + (Point& point);
		Point operator - (Point& point);
		Point operator* (float s);

		friend void operator << (std::ostream& ostream, rlm::Point& point);

	public:
		float x, y;

	};
}
