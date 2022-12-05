#include <iostream>
#include "Value.hpp"

int main(int argc, char **argv)
{
	std::string value;
	if (argc != 2)
	{
		std::cout << "Please enter only one argument " << std::endl;
		return (0);
	}
	value = argv[1];
	Value v(value);
}