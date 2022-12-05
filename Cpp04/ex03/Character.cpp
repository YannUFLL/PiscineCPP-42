#include "Character.hpp"
#include "AMateria.hpp"

// Constructors

AMateria **Character::_unequipMateria = NULL; 
int Character::_nbrUnequipMateria = 0; 

Character::Character()
{
	_materia[0] = NULL;
	_materia[1] = NULL;
	_materia[2] = NULL;
	_materia[3] = NULL;
	std::cout << "\e[0;33mDefault Constructor called of Character\e[0m" << std::endl;
}

Character::Character(std::string name)
{
	_name = name;
	std::cout << "\e[0;33mOverloard constructor called of Character\e[0m" << std::endl;
}

Character::Character(const Character &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Character\e[0m" << std::endl;
}


// Destructor
Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] != NULL)
			delete _materia[i];
	}
	std::cout << "\e[0;31mDestructor called of Character\e[0m" << std::endl;
}


// Operators
Character & Character::operator=(const Character &assign)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] != NULL)
			delete _materia[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (assign._materia[i] != NULL)
			_materia[i] = (*assign._materia)[i].clone(); 
	}
	return *this;
}

std::string const & Character::getName() const
{
	return _name;
}
void Character::equip(AMateria* m)
{

	int i;
	i = 0;

	while(_materia[i] != NULL  && i < 4)
		i++;
	if (i < 4)
		_materia[i] = m;
	if (i > 4)
		std::cout << "Inventory is full" << std::endl;
}
void Character::unequip(int idx)
{
	AMateria *temp;
		
	if (idx > 3 || idx < 0)
	{
		std::cout << "this index is not part of the inventory" << std::endl;
		return;
	}
	temp = _materia[idx];
	_materia[idx] = NULL;
	AMateria **newUnequipMateria = NULL;
	int i = 0;
	
	newUnequipMateria = new AMateria *[_nbrUnequipMateria + 1]; 
	if (_nbrUnequipMateria != 0)
	{
		for ( i = 0; i < _nbrUnequipMateria; i++)
			(newUnequipMateria)[i] = _materia[i];
	}
	_nbrUnequipMateria++;
	newUnequipMateria[i] = temp;
	if (_unequipMateria != NULL)
		delete[] _unequipMateria;
	_unequipMateria = newUnequipMateria;
}
void Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << "this index is not part of the inventory" << std::endl;
		return ;
	}
	if (_materia[idx] == NULL)
	{
		std::cout << "this part of the inventory is empty" << std::endl;
		return ;
	}
	_materia[idx]->use(target);
}
