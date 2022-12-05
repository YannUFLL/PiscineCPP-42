#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include <string>
# include <fstream>

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
		// Constructors
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		PresidentialPardonForm(std::string target);
		
		// Destructor
		~PresidentialPardonForm();
		
		// Operators
		PresidentialPardonForm & operator=(const PresidentialPardonForm &assign);

		// Function Member
		void	execute(Bureaucrate const & executor);
		
	private:
		PresidentialPardonForm();
		std::string _target;
		
};

#endif