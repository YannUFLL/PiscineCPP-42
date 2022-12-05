#include "RobotomyRequestForm.hpp"

// Constructors
RobotomyRequestForm::RobotomyRequestForm(): _target("")
{
	std::cout << "\e[0;33mDefault Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Robotomy request", 72, 45), _target(target)
{
	std::cout << "\e[0;33mOverload Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of RobotomyRequestForm\e[0m" << std::endl;
}


// Destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\e[0;31mDestructor called of RobotomyRequestForm\e[0m" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrate const & executor)
{
	if (executor.getRank() > get_requiredExe())
		throw Form::GradeTooLowException(); 
	if (!get_signed())
		throw Form::NotSignedException();
	std::cout << "Starting robotomy..." << std::endl;
	std::cout << "BBRRrrrrrrrrr...Brrrrrr...BBBRRRR..." << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << _target << " waz robotomized" << std::endl;
	else 
		std::cout << "The robotomy failed" << std::endl;
}


// Operators
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	(void) assign;
	return *this;

}

