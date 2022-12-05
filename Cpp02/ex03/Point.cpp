#include "Point.hpp"
		
Point::Point(): m_x(0), m_y(0)
{

}
Point::Point(float a, float b): m_x(a), m_y(b)
{

}
Point::~Point()
{

}
Point::Point(Point const &PointToCopy):m_x(PointToCopy.m_x), m_y(PointToCopy.m_y)
{
}
Point& Point::operator=(Point const &source)
{
	(void)source;
	return (*this);
}

Fixed Point::getX() const
{
	return (m_x);
}

Fixed Point::getY() const
{
	return (m_y);
}
