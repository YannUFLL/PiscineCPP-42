#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	PhoneBook A;
	std::string str;
	std::cout << std::endl << "Hello, Welcome to PhoneBook 1.45, Enjoy ! " << std::endl << std::endl; 
	while(1)
	{
		std::cout << "Please enter a command, The program only accepts ADD, SEARCH and EXIT :" << std::endl; 
		std::getline(std::cin, str);
		if (str == "ADD" && str.size() == 3)
			A.addContact();
		if (str == "SEARCH"  && str.size() == 6)
			A.printPhoneBook();
		if (str == "EXIT" &&  str.size() == 4)
		{
			std::cout << std::endl << std::endl << "Thanks for using the PhoneBook 1.45, see you soon !" << std::endl; 
			break; 
		}
	}
}