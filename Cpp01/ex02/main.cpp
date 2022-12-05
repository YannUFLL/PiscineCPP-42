#include <iostream>

int	main(void)
{
	std::string str = "HIS THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Adresse string : " << &str << std::endl;
	std::cout << "Adresse stockee dans stringPTR : " << stringPTR << std::endl;
	std::cout << "Adresse stockee dans stringREF : " << &stringREF << std::endl;

	std::cout << "Valeur de la string : " << str << std::endl;
	std::cout << "Valeur pointe par stringPTR : " << *stringPTR << std::endl;
	std::cout << "Valeur pointe par stringREF : " << stringREF << std::endl;
}
