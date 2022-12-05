#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(std::string &name): ClapTrap(), FragTrap(), ScavTrap()
{
	ClapTrap::m_Name =  name + "_clap_name ";
	m_Name = name;
	m_HitPoints = FragTrap::m_HitPoints ;
	m_AttackDamage = FragTrap::m_AttackDamage;
	m_Energy = ScavTrap::m_Energy;
	std::cout << "valeur de m_energy : " << m_Energy << std::endl;
	this->addInstance(name);
	std::cout << "Constructeur surchargé de DiamondTrap appelé" << std::endl;
}


DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructeur de DiamondTrap appelé" << std::endl;
}

DiamondTrap::DiamondTrap()
{
	std::cout << "Constructeur de DiamondTrap appelé" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &DiamondTrapToCopy)
{
	std::cout << "Constructeur de copie de DiamondTrap appeleé" << std::endl;
	this->addInstance(DiamondTrapToCopy.m_Name);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I am : " << m_Name << " and my Claptrap name is "
	<< ClapTrap::m_Name << std::endl;

}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}



