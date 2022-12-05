#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string new_name)
{
	name = new_name;
}

void	Zombie::zombieSetName(std::string new_name)
{
	name = new_name;
}

Zombie::~Zombie()
{
	std::cout << name <<  " was destroy" << std::endl; 
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

