#include "Contact.hpp"
#include <ctime>
#include <cctype>

Contact::Contact() : m_firstName(""), m_lastName(""), m_nickName(""), m_phoneNumber(""), m_darkestSecret("")
{}
Contact::~Contact()
{}

void	Contact::checkEmpty(std::string *check)
{
	int ok; 
	ok = 1;
	while (ok == 1)
	{
		for (unsigned int i=0; i< check->size(); i++)
		{
			ok = isspace((*check)[i]);
				if (ok == 0)
					break ;
			}
		if (ok == 0)
			break ;
		std::cout << "Incorrect input. Please enter something : " ;
		std::getline(std::cin, *check);
    }
}
void	Contact::newContact()
{
	int ok;
	std::cout << std::endl << "Please complete the information of the contact" << std::endl; 
	std::cout << "First Name : " ;
	std::getline(std::cin, m_firstName);
	checkEmpty(&m_firstName);
	std::cout << "Last Name : " ;
	std::getline(std::cin, m_lastName);
	checkEmpty(&m_lastName);
	std::cout << "NickName : " ;
	std::getline(std::cin, m_nickName);
	checkEmpty(&m_nickName);
	std::cout << "Phone Number : " ;
	std::getline(std::cin, m_phoneNumber);
	ok = 0;
	while (ok == 0)
	{
		for (unsigned int i = 0; i < m_phoneNumber.size(); i++) 
		{
			ok = isdigit(m_phoneNumber[i]);
			if (ok == 0)
				break;
		}
		if (ok == 1)
			break;
		std::cout << "Incorrect input. Please only use number : " ;
		std::getline(std::cin, m_phoneNumber);
	}
	std::cout << "Darkest Secret : ";
	std::getline(std::cin, m_darkestSecret);
	checkEmpty(&m_darkestSecret);
	std::cout << "Successful" << std::endl << std::endl;
}

void	Contact::printContactLine() const
{
	std::cout << std::endl << "Contact info :" << std::endl << std::endl; 
	std::cout << "First Name : ";
	std::cout << m_firstName << std::endl;
	std::cout << "Last Name : " ;
	std::cout << m_lastName << std::endl;
	std::cout << "NickName : " ;
	std::cout << m_nickName << std::endl;
	std::cout << "Phone Number : " ;
	std::cout << m_phoneNumber << std::endl ;
	std::cout << "Darkest Secret : "; 
	std::cout << m_darkestSecret << std::endl << std::endl;
}

void	Contact::printContactColumn() const
{
	if (m_firstName.size() > 10)
		std::cout << std::setw(9) <<  m_firstName.substr(0, 9) << "." << "|";
	else 
		std::cout << std::setw(10) <<  m_firstName.substr(0, 10) << "|";
	if (m_lastName.size() > 10)
		std::cout << std::setw(9) <<  m_lastName.substr(0, 9) << "." << "|";
	else 
		std::cout << std::setw(10) <<  m_lastName.substr(0, 10)<< "|";
	if (m_nickName.size() > 10)
		std::cout << std::setw(9) <<  m_nickName.substr(0, 9) << "." << "|";
	else 
		std::cout << std::setw(10) <<  m_nickName.substr(0, 10) << "|" << std::endl;
}