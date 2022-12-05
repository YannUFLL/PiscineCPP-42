#ifndef HARL_CPP
#define HARL_CPP

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

class Harl
{
	public :
	    void    complain(std::string level);
	private :
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

};

#endif 