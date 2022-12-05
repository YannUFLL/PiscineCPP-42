#include "ClapTrap.hpp"


int ClapTrap::m_nbrInstances = 0;
ClapTrap *ClapTrap::m_instances[10] = {0,0,0,0,0,0,0,0,0,0};
std::string ClapTrap::m_nameInstances[10] = {"","","","","","","","","",""};


void	ClapTrap::addInstance(const std::string &name)
{
	m_instances[m_nbrInstances] = this;
	m_nameInstances[m_nbrInstances] = name; 
	m_nbrInstances++;
}

ClapTrap::ClapTrap(std::string &name): m_Name(name),  m_HitPoints(10), m_Energy(10), m_AttackDamage(0)
{
	std::cout << "Constructeur de ClapTrap surchargé appelé" << std::endl;
}

ClapTrap::ClapTrap(): m_HitPoints(10), m_Energy(10), m_AttackDamage(0)
{
	std::cout << "Constructeur de ClapTrap appelé" << std::endl;
}


ClapTrap::~ClapTrap()
{
std::cout << "Destructeur de ClapTrap appelé" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &clapTrapToCopy):
	m_Name(clapTrapToCopy.m_Name),m_HitPoints(clapTrapToCopy.m_HitPoints), 
	m_Energy(clapTrapToCopy.m_Energy), m_AttackDamage(clapTrapToCopy.m_AttackDamage)
{
	this->addInstance(clapTrapToCopy.m_Name);
}

ClapTrap &ClapTrap::operator=(ClapTrap const &clapTrapToCopy)
{
	std::cout << "Operateur d'affection appelé" << std::endl;
	std::cout << "valeur de this : " << this << std::endl; 
	if (this != &clapTrapToCopy)
	{
		m_Name = clapTrapToCopy.m_Name;
		m_HitPoints = clapTrapToCopy.m_HitPoints;
		m_Energy = clapTrapToCopy.m_Energy;
		m_AttackDamage = clapTrapToCopy.m_AttackDamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	int i;
	if (m_HitPoints > 0 && m_Energy > 0)
	{
		std::cout << "ClapTrap " << m_Name << " attacks " << target  
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

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((m_HitPoints - amount) > 0)
		m_HitPoints -= amount;
	else 
		m_HitPoints = 0;
	std::cout << "ClapTrap " << m_Name
	<< ", loosing " << amount << " points of life !" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (m_Energy > 0)
	{
		std::cout << "ClapTrap " << m_Name<< " repair " << amount << " points of life !" << std::endl;
		m_HitPoints += amount;
		m_Energy--;
		}
	
}