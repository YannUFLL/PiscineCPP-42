#include "Cat.hpp"
#include "Animal.hpp"

// Constructors
Cat::Cat()
{
	type = "cat";
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
}


// Destructor
Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
}


// Operators
Cat & Cat::operator=(const Cat &assign)
{
	(void) assign;
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "MiaouMiaou" << std::endl;	
}

