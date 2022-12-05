#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie 
{
	public : 
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
		static Zombie* zombieHorde(int N, std::string name);
	private : 
		void	zombieSetName(std::string new_name);
		std::string name; 

};


#endif