#include "Dog.hpp"
#include "Animal.hpp"

// Constructors
Dog::Dog()
{
	std::cout << "\e[0;33mDefault Constructor called of Dog\e[0m" << std::endl;
	brain = new Brain();
	type = "dog";
}


Dog::Dog(const Dog &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Dog\e[0m" << std::endl;
}


// Destructor
Dog::~Dog()
{
	std::cout << "\e[0;31mDestructor called of Dog\e[0m" << std::endl;
	delete brain;
}


// Operators
Dog & Dog::operator=(const Dog &assign)
{
	brain = assign.brain;
	type = assign.type;
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "WoufWouf" << std::endl;
}

/*  */