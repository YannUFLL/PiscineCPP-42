#include "MateriaSource.hpp"

// Constructors
MateriaSource::MateriaSource()
{
	_materia[0] = NULL;
	_materia[1] = NULL;
	_materia[2] = NULL;
	_materia[3] = NULL;
	std::cout << "\e[0;33mDefault Constructor called of MateriaSource\e[0m" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of MateriaSource\e[0m" << std::endl;
}


// Destructor
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] != NULL)
			delete _materia[i];
	}
	std::cout << "\e[0;31mDestructor called of MateriaSource\e[0m" << std::endl;
}


// Operators
MateriaSource & MateriaSource::operator=(const MateriaSource &assign)
{
	(void) assign;
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] == NULL)
		{
			_materia[i] = materia;
			return;
		}
	}
	std::cout << "Error, MateriaSource full, can't add materia anymore " << std::endl;
	delete materia;
		

}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] == NULL)
			break;
		if (_materia[i]->getType() == type)
		{
			return (_materia[i]->clone());
		}
	}
	std::cout << "Ce materiel n'a pas ete appris et ne peux pas etre cree " << std::endl; 
	return (NULL);
}

