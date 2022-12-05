#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <iostream>
# include <string>
# include <fstream>

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	public:
		// Constructors
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm(std::string target);
		
		// Destructor
		~RobotomyRequestForm();
		
		// Operators
		RobotomyRequestForm & operator=(const RobotomyRequestForm &assign);

		// Function Member
		void	execute(Bureaucrate const & executor);
		
	private:
		RobotomyRequestForm();
		std::string _target;
		
};

#endif