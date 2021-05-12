#include "Point.h"
namespace rlm
{
	void Point::Add(Point& point)
	{
		x += point.x;
		y += point.y;
	}
	void Point::Write(std::ostream& ostream)
	{
		ostream << x << " : " << y << std::endl;
	}

	Point Point::operator + (Point& point)
	{
		return Point(x + point.x, y + point.y);
	}

	Point Point::operator + (Point& point)
	{
		return Point(x - point.x, y - point.y);
	}

	Point Point::operator* (float s)
	{
		Point p;
		p.x * s;
		p.y * s;

		return p;
	}

	std::ostream& operator << (std::ostream& ostream, rlm::Point& point)
	{
		ostream << point.x << " : " << point.y << std::endl;
		return ostream;
	}

}