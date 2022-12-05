#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde( int N, std::string name )
{
	Zombie *ptrHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		(ptrHorde[i]).zombieSetName(name);
		(ptrHorde[i]).announce();
		
	}
	return (ptrHorde);

}