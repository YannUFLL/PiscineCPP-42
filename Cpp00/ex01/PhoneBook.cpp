#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() : m_nbContact(0), m_indexFifo(0)
{}

PhoneBook::~PhoneBook()
{}

void	PhoneBook::addContact()
{ 
	if (m_nbContact != 8)
		m_nbContact++;
	m_indexFifo++;
	if (m_indexFifo == 9)
		m_indexFifo = 1;
	m_listeContact[m_indexFifo - 1].newContact();
	return ;
}

void	PhoneBook::printPhoneBook() const
{
	int	indexValue;
	indexValue = 0;
	if (m_nbContact == 0)
	{
		std::cout << std::endl << "No contact in phonebook, back to home" << std::endl;
		return ;
	}
	std::cout << std::endl << "     index|first name| last name|  nickname|" << std::endl;
	for (int i = 0; i <  m_nbContact; i++)
	{
		std::cout << std::setw(10) <<  i + 1 << "|";
		m_listeContact[i].printContactColumn();
	}
	std::cout << std::endl << std::endl << "Please enter an valid index value : ";
	while (!(std::cin >> indexValue) || indexValue <= 0 || indexValue > m_nbContact)
	{
		std::cout << "Incorrect input. Please try again : ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	m_listeContact[indexValue - 1].printContactLine();
}