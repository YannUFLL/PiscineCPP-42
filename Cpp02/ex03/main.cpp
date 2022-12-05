#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) 
{
	Point a(1, 2);
	Point b(5, 8);
	Point c(9, 4);
	Point point(3.64, 6.07);

if (bsp( a, b, c, point))
	std::cout << "Le point est dans le triangle" << std::endl;
else 
	std::cout << "Le point n'est pas dans le triangle" << std::endl;
return 0; 
}
