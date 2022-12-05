#include "Dog.hpp"
#include "Animal.hpp"

// Constructors
Dog::Dog()
{
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
	type = "dog";
}


Dog::Dog(const Dog &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
}


// Destructor
Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
}


// Operators
Dog & Dog::operator=(const Dog &assign)
{
	(void) assign;
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "WoufWouf" << std::endl;
}

/*  */