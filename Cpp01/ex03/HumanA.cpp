#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string newName, Weapon &type): name(newName), weapon(type)
{
	
}

void	HumanA::attack() const
{
	std::cout << name << "attacks with their " << weapon.getType() << std::endl;  
}