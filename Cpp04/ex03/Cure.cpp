#include "Cure.hpp"
#include "AMateria.hpp"

// Constructors
Cure::Cure()
{
	type = "cure";
	std::cout << "\e[0;33mDefault Constructor called of Cure\e[0m" << std::endl;
}

Cure::Cure(const Cure &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Cure\e[0m" << std::endl;
}


// Destructor
Cure::~Cure()
{
	std::cout << "\e[0;31mDestructor called of Cure\e[0m" << std::endl;
}


// Operators
Cure & Cure::operator=(const Cure &assign)
{
	(void)assign;
	return *this;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}

Cure* Cure::clone() const
{
	Cure *clone = new Cure();
	*clone = *this;
	return(clone);
}

