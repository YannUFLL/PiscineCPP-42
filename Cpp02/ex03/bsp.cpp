#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)

	{
		Fixed result1 = (c.getX() - point.getX()) * (a.getY() - point.getY()) - (c.getY() - point.getY()) * (a.getX() - point.getX());
		Fixed result2 = (a.getX() - point.getX()) * (b.getY() - point.getY()) - (a.getY() - point.getY()) * (b.getX() - point.getX());
		Fixed result3 = (b.getX() - point.getX()) * (c.getY() - point.getY()) - (b.getY() - point.getY()) * (c.getX() - point.getX());
		if ((result1 < 0 && result2 < 0 && result3 < 0) || (result1 > 0 && result2 > 0 && result3 > 0))
			return (true);
		else
			return (false);
		return (1);
	}