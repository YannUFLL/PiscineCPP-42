#ifndef FRAPTRAP_HPP
#define FRAPTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public :
		FragTrap(std::string &name);
		~FragTrap();
		FragTrap(FragTrap const &FragTrapToCopy);
		void	highFivesGuys(void);
		void	attack(const std::string& target);
	protected :
		FragTrap();
		int	m_HitPoints;
		int m_Energy; 
		int m_AttackDamage;

};

#endif

