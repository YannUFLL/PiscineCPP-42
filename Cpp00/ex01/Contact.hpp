#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cstring>
#include <iomanip>

class Contact
{
	public :
		Contact();
		void newContact();
		void printContactColumn() const;
		void printContactLine() const;
		~Contact();
	private :
		void checkEmpty(std::string *check);
		std::string m_firstName;
		std::string m_lastName;
		std::string m_nickName;
		std::string m_phoneNumber;
		std::string m_darkestSecret;

};

#endif