#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	public:
		// Constructors
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm(std::string target);
		
		// Destructor
		~ShrubberyCreationForm();
		
		// Operators
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &assign);

		// Function Member
		void	execute(Bureaucrate const & executor);
		
	private:
		ShrubberyCreationForm();
		std::string _target;
		
};

#endif