#include "Harl.hpp"

Harl::Harl(void): m_level(-1)
{}

Harl::Harl(std::string &arg): m_level(-1)
{
	std::string adv[4] = {"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; i++)
	{
		if (arg == adv[i])
			m_level = i;
	}

}
void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl; 
}

void		Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl; 
}

void	Harl::warning(void)
{
	std::cout << " think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl; 
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl; 
}


void	Harl::complain(std::string type)
{
	void (Harl::*ptr[4])(void) = {&Harl::debug,&Harl::info, &Harl::warning, &Harl::error};
	std::string advMsg[4] = {"debug","info","warning","error" };

	int	i;

	for (i = 0; i < 5; i++) 
	{
		if (type == advMsg[i])
		{
			break ;
		}
	}
	if (i < m_level) 
		return ;

	switch(i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*(ptr[0]))(); 
			break; 
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			(this->*(ptr[1]))(); 
			break;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			(this->*(ptr[2]))(); 
			break;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			(this->*(ptr[3]))(); 
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
