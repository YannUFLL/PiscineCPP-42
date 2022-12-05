#include "easyfind.hpp"

int main()
{
	std::vector<int> a;

	std::vector<int>::iterator it;
	a.push_back(32);
	a.push_back(12);
	a.push_back(18);
	a.push_back(22);
	a.push_back(32);
	std::cout << a[8] << std::endl;
	it = easyfind(a, 18);
	std::cout << "valeur it : " << *it << std::endl;
	try
	{
		it = easyfind(a, 17);
		std::cout << "valeur it : " << *it << std::endl;
	}
	catch (std::exception &e) 
	{
		std::cout << e.what() << std::endl;
	}
}

