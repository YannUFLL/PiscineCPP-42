#include "WrongAnimal.hpp"

// Constructors
WrongAnimal::WrongAnimal()
{
	std::cout << "\e[0;33mDefault Constructor called of WrongAnimal\e[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of WrongAnimal\e[0m" << std::endl;
}


// Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "\e[0;31mDestructor called of WrongAnimal\e[0m" << std::endl;
}


// Operators
WrongAnimal & WrongAnimal::operator=(const WrongAnimal &assign)
{
	(void) assign;
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Yo man, je suis un annimal mais je ne sais pas lequel " << std::endl; 
}

