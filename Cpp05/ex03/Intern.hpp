#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		// Constructors
		Intern();
		Intern(const Intern &copy);
		
		// Destructor
		~Intern();
		
		// Operators
		Intern & operator=(const Intern &assign);

		// Function Member
		Form *makeForm(std::string name, std::string target);
		
	private:
		typedef struct form
		{
			std::string _formName;
			Form*		_form;
		}	t_form;
};

#endif