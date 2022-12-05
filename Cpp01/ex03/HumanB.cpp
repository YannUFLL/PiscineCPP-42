#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string newName): name(newName), weapon(NULL)
{
	
}


void	HumanB::attack() const
{
	std::cout << name << "attacks with their " << weapon->getType() << std::endl;  
}

void	HumanB::setWeapon(Weapon &type)
{
	weapon = &type;
}