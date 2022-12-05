#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
class ClapTrap;

class ClapTrap
{
	public :
		ClapTrap(std::string &name);
		~ClapTrap();
		ClapTrap(ClapTrap const &clapTrapToCopy);
		ClapTrap &operator=(ClapTrap const &clapTrapToCopy);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected :
		ClapTrap();
		void	addInstance(const std::string &name);
		std::string m_Name;
		int	m_HitPoints;
		int m_Energy;
		int m_AttackDamage;
		const static int m_nbBits;
		static ClapTrap *m_instances[10];
		static std::string m_nameInstances[10]; 
		static int m_nbrInstances;
		
};

#endif

