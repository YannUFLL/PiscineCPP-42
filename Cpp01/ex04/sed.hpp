#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

class Sed
{
	public :
		Sed(std::string &sourceName, std::string &destName, std::string &s1, std::string &s2);
		void	startSed(void);
	private :
		std::string &m_s1;
		std::string &m_s2;
		std::string m_source;
		std::ofstream m_ofs;
};


#endif
