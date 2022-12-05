#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
		FragTrap(std::string &name);
		~FragTrap();
		FragTrap(FragTrap const &FragTrapToCopy);
		void	highFivesGuys(void);
	private :
		FragTrap();
};

#endif

