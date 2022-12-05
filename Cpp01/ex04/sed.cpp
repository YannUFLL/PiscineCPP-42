#include "sed.hpp"

Sed::Sed(std::string &sourceName, std::string &destName, std::string &s1, std::string &s2): m_s1(s1), m_s2(s2)
{
	std::ifstream ifs(sourceName); 
	std::stringstream bufferSource;

	if (ifs.fail())
	{
		std::cout << "Unable to open file, program stop." << std::endl; 
		return;
	}
	if (s1.empty() || s2.empty())
	{
		std::cout << "empty string is useless, program stop";
		return ;
	}
	bufferSource << ifs.rdbuf();
	m_source = bufferSource.str();
	m_ofs.open(destName, std::ofstream::out);
}

void	Sed::startSed(void )
{
	int i;
	int lengthS1; 
	int lengthS2; 
	int lengthSource;

	i = 0; 
	lengthSource = m_source.size(); 
	lengthS1 = m_s1.size(); 
	lengthS2 = m_s2.size(); 
	while (i < lengthSource)
	{
		if (m_source.compare(i, lengthS1, m_s1) == 0)
		{
			m_source.erase(i, lengthS1);
			lengthSource-= lengthS1;
			m_source.insert(i, m_s2);
			lengthSource += lengthS2; 
			i += lengthS2;
		}
		i++;
	}
	m_ofs << m_source ;
}