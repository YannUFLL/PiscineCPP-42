#ifndef ClapTrap_HPP
#define ClapTrap_HPP

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
		static void clean();
	private :
		void addInstance(const std::string &name);
		ClapTrap();
		std::string m_Name;
		int	m_HitPoints;
		int m_Energy;
		int m_AttackDamage;
		const static int m_nbBits;
		static ClapTrap *m_instances ;
		static std::string *m_nameInstances; 
		static int m_nbrInstances;
};

#endif

