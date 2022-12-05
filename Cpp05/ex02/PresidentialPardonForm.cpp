#include "PresidentialPardonForm.hpp"

// Constructors
PresidentialPardonForm::PresidentialPardonForm(): _target("")
{
	std::cout << "\e[0;33mDefault Constructor called of PresidentialPardonForm\e[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("Presidential pardon", 72, 45), _target(target)
{
	std::cout << "\e[0;33mOverload Constructor called of PresidentialPardonForm\e[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of PresidentialPardonForm\e[0m" << std::endl;
}


// Destructor
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "\e[0;31mDestructor called of PresidentialPardonForm\e[0m" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrate const & executor)
{
	if (executor.getRank() > get_requiredExe())
		throw Form::GradeTooLowException(); 
	if (!get_signed())
		throw Form::NotSignedException();
	std::cout << _target << " has been forgiven by Zaphod Beeblebrox"  << std::endl;
}


// Operators
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	(void) assign;
	return *this;
}

