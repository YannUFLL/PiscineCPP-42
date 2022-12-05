#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <cstring>
#include "Contact.hpp"
#include <iomanip>

class PhoneBook
{
	public :
		PhoneBook();
		void addContact();
		void printPhoneBook() const;
		~PhoneBook();


	private :
		Contact m_listeContact[8];
		int m_nbContact;
		int	m_indexFifo;

}; 


#endif //PHONEBOOK_HPP