#include <iostream>
#include "Array.hpp"

int main()
{
	Array<int> a(5);
	Array<int> b(3);

	a[0] = 28;
	a[1] = 154;
	a[2] = 35;
	a[3] = 73;
	a[4] = 58;
	std::cout << a[1] << std::endl;
	std::cout << std::endl;

	try
	{
		a[8] = 201;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "failed to access array, invalid index" << std::endl;
	}
	std::cout << std::endl;

	b = a;
	std::cout << "valeur de b[4] après copie : " << b[4] << std::endl;  
	std::cout << std::endl;

	Array<std::string> c(3);
	c[0] = "bonjour ";
	c[1] = "je m'appelle ";
	c[2] = "Yann ";
	for (int i = 0; i < 3; i++)
		std::cout << c[i];
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Size of array a : " <<  a.size() << std::endl;
	std::cout << "Size of array c : " <<  c.size() << std::endl;
	std::cout << std::endl;
}
