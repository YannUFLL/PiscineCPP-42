#include "FragTrap.hpp"

FragTrap::FragTrap(std::string &name)
{
	m_Name = name;
	m_HitPoints = 100;
	m_Energy = 100;
	m_AttackDamage = 30;
	this->addInstance(name);
	std::cout << "Constructeur surchargé de FragTrap appelé" << std::endl;
}


FragTrap::~FragTrap()
{
	std::cout << "Destructeur de FragTrap appelé" << std::endl;
}

FragTrap::FragTrap()
{
	std::cout << "Constructeur de FragTrap appelé" << std::endl;
}

FragTrap::FragTrap(FragTrap const &FragTrapToCopy)
{
	std::cout << "Constructeur de copie de FragTrap appeleé" << std::endl;
	std::cout << "m_nbrInstances : " << m_nbrInstances << std::endl;
	this->addInstance(FragTrapToCopy.m_Name);
}

void	FragTrap::highFivesGuys(void)
{
	std::string highFive;
	std::cout << "Yo man, ici le FragTrap " << m_Name << ", fais mois un highFive Frèro" << std::endl;
	std::getline(std::cin, highFive);
	std::cout << "Merci pour ce HighFive mon frère ! À bientôt ! " << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	int i;
	if (m_HitPoints > 0 && m_Energy > 0)
	{
		std::cout << "FragTrap : " << m_Name << " attacks : " << target  
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

