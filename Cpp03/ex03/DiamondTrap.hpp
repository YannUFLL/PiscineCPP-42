#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public :
		using FragTrap::attack; // "... uses a super ScavTrap attack on ..." ok
		DiamondTrap(std::string &name);
		~DiamondTrap();
		DiamondTrap(DiamondTrap const &DiamondTrapToCopy);
		void	whoAmI();
		void	attack(const std::string& target);

	private :
		std::string m_Name; 
		DiamondTrap();
		int	m_HitPoints;
		int m_Energy; 
		int m_AttackDamage;
};

#endif

