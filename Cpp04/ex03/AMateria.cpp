#include "AMateria.hpp"

// Constructors
AMateria::AMateria()
{
		std::cout << "\e[0;33mDefault Constructor called of AMateria\e[0m" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of AMateria\e[0m" << std::endl;
}


// Destructor
AMateria::~AMateria()
{
	std::cout << "\e[0;31mDestructor called of AMateria\e[0m" << std::endl;
}


// Operators
AMateria & AMateria::operator=(const AMateria &assign)
{
	type = assign.type;
	return *this;
}

void		AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "Nothing append" << std::endl;
	return ;
}

std::string const & AMateria::getType() const //Returns the materia type
{
	return type;
}

