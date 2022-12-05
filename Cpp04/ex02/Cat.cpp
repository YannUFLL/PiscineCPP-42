#include "Cat.hpp"
#include "Animal.hpp"

// Constructors
Cat::Cat()
{
	std::cout << "\e[0;33mDefault Constructor called of Cat\e[0m" << std::endl;
	type = "cat";
	brain = new Brain();
}

Cat::Cat(const Cat &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Cat\e[0m" << std::endl;
}


// Destructor
Cat::~Cat()
{
	std::cout << "\e[0;31mDestructor called of Cat\e[0m" << std::endl;
	delete brain;
}


// Operators
Cat & Cat::operator=(const Cat &assign)
{
	brain = assign.brain;

	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "MiaouMiaou" << std::endl;	
}

