#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public :
		ScavTrap(std::string &name);
		~ScavTrap();
		ScavTrap(ScavTrap const &scavTrapToCopy);
		void	guardGate();
		void	attack(const std::string& target);
	protected :
		ScavTrap();
		int	m_HitPoints;
		int m_Energy; 
		int m_AttackDamage;
};

#endif

