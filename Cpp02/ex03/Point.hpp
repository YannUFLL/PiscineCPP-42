#ifndef POINT_HPP 
#define	POINT_HPP 

#include <iomanip>
#include <iostream>
#include <string>
#include "Fixed.hpp"

class Point
{
	public :
		Point();
		Point(float a, float b);
		~Point();
		Point(Point const &PointToCopy);
		Fixed getX() const;
		Fixed getY() const;
	private :
		Point& operator=(Point const &source);
		Fixed const m_x;
		Fixed const m_y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);


#endif

