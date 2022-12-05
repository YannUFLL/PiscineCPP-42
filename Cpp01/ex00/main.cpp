#include "Zombie.hpp"

int	main(void)
{
	std::cout << std::endl << "first Zombie, create Manually : " << std::endl;
	Zombie loic("loic");
	loic.announce();
	std::cout << std::endl << "Second Zombie, Random : " << std::endl;
	Zombie::randomChump("Bertrand");
	std::cout << std::endl << "Third Zombie, Random : " << std::endl ;
	Zombie *ptrZombie;
	ptrZombie = Zombie::newZombie("Joe");
	(*ptrZombie).announce();
	delete ptrZombie;
}