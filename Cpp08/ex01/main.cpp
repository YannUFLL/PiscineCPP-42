
#include "Span.hpp"
int main()
{
	int random;
Span sp(5);

sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(97);
sp.addNumber(9);
sp.addNumber(11);
try 
{
	sp.addNumber(18);
}
catch(std::exception &e)
{
	std::cout << e.what() << std::endl;
}
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;

Span sp2(100000);
std::vector<int> a ;
for (int i = 0; i < 100000; i++)
{
	random = rand();
	a.push_back(random);
}
try
{
	sp2.addRange(a.begin(),a.end());
}
catch (const std::exception &e)
{
	std::cout << e.what() << std::endl ;
}
std::cout << sp2.longestSpan() << std::endl;
std::cout << sp2.shortestSpan() << std::endl;
return 0;
}

