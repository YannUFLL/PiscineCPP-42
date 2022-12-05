#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string &name)
{
	m_Name = name;
	m_HitPoints = 100;
	m_Energy = 50;
	m_AttackDamage = 20;
	this->addInstance(name);
	std::cout << "Constructeur surchargé de ScavTrap appelé" << std::endl;
}


ScavTrap::~ScavTrap()
{
	std::cout << "Destructeur de ScavTrap appelé" << std::endl;
}

ScavTrap::ScavTrap()
{
	std::cout << "Constructeur de ScavTrap appelé" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &scavTrapToCopy)
{
	std::cout << "Constructeur de copie de ScavTrap appeleé" << std::endl;
	std::cout << "m_nbrInstances : " << m_nbrInstances << std::endl;
	this->addInstance(scavTrapToCopy.m_Name);
}


void	ScavTrap::guardGate()
{
	std::cout << "ScaveTrap est entré en mode 'Gate keeper' " << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	int i;
	if (m_HitPoints > 0 && m_Energy > 0)
	{
		std::cout << "ScavTrap : " << m_Name << " attacks : " << target  
		<< ", causing " << m_AttackDamage << " points of damage !" << std::endl;
		for (i = 0; i < m_nbrInstances; i++)
		{
			if (m_nameInstances[i] == target)
			{
				m_instances[i]->takeDamage(m_AttackDamage);
				m_Energy--;
				break;
			}
		}
	}
}


