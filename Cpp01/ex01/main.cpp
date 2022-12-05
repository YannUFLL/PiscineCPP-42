#include "Zombie.hpp"

int	main(void)
{
	Zombie *ptr;
	ptr = Zombie::zombieHorde(5, "ZombieJean");
	delete [] ptr;
}