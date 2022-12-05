#include "ClapTrap.hpp"


int ClapTrap::m_nbrInstances = 0;
ClapTrap *ClapTrap::m_instances = NULL;
std::string *ClapTrap::m_nameInstances = NULL;

void	ClapTrap::addInstance(const std::string &name)
{
	ClapTrap *newInstances = NULL;
	std::string *newnameInstances = NULL;
	int i = 0;
	
	newInstances = new ClapTrap[m_nbrInstances + 1]; 
	newnameInstances = new std::string[m_nbrInstances + 1]; 
	if (m_nbrInstances != 0)
	{
		for ( i = 0; i < m_nbrInstances; i++)
		{
			newInstances[i] = m_instances[i];
			newnameInstances[i] = m_nameInstances[i];
		}
	}
	m_nbrInstances++;	
	newInstances[i] = *this;
	newnameInstances[i] = name;
	if (m_instances != NULL)
		delete[] m_instances;
	if (m_nameInstances != NULL)
		delete[] m_nameInstances;
	m_instances = newInstances;
	m_nameInstances = newnameInstances;
}

ClapTrap::ClapTrap(std::string &name): m_Name(name),  m_HitPoints(10), m_Energy(10), m_AttackDamage(0)
{
	std::cout << "Constructeur de copie surchargé appelé" << std::endl;
	this->addInstance(name);
}

ClapTrap::ClapTrap()
{

}


ClapTrap::~ClapTrap()
{
std::cout << "Destructeur appelé" << std::endl;

}

ClapTrap::ClapTrap(ClapTrap const &clapTrapToCopy):
	m_Name(clapTrapToCopy.m_Name),m_HitPoints(clapTrapToCopy.m_HitPoints), 
	m_Energy(clapTrapToCopy.m_Energy), m_AttackDamage(clapTrapToCopy.m_AttackDamage)
{
	

}

ClapTrap &ClapTrap::operator=(ClapTrap const &clapTrapToCopy)
{
	if (this != &clapTrapToCopy)
	{
	m_AttackDamage = clapTrapToCopy.m_AttackDamage;
	m_HitPoints = clapTrapToCopy.m_HitPoints;
	m_Energy = clapTrapToCopy.m_Energy;
	m_Name = clapTrapToCopy.m_Name;
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
				break;
		}
		m_instances[i].takeDamage(m_AttackDamage);
		m_Energy--;
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
		std::cout << " ClapTrap " << m_Name << " repair " << amount << " points of life ! " << std::endl;
		m_HitPoints += amount;
		m_Energy--;
	}
	
}

void	ClapTrap::clean()
{
	delete[] m_instances;
	delete[] m_nameInstances; 
}