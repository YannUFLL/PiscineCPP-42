#include "Bureaucrate.hpp"

int main()
{
	try
	{
		Bureaucrate nelson("Nelson", 2);
		nelson.lowerRank();
		std::cout << nelson << std::endl;
		nelson.raiseRank();
		std::cout << nelson << std::endl;
		nelson.raiseRank();
		std::cout << nelson << std::endl;
		nelson.raiseRank();
		std::cout << nelson << std::endl;
		nelson.raiseRank();
		std::cout << nelson << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}


}
