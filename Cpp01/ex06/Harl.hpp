#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

class Harl
{
	public :
		Harl();
		Harl(std::string &str);
	    void    complain(std::string level);
	private :
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		int		m_level;

};

#endif 