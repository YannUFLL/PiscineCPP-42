#include "Intern.hpp"

// Constructors
Intern::Intern()
{
	std::cout << "\e[0;33mDefault Constructor called of Intern\e[0m" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Intern\e[0m" << std::endl;
}


// Destructor
Intern::~Intern()
{
	std::cout << "\e[0;31mDestructor called of Intern\e[0m" << std::endl;
}


// Operators
Intern & Intern::operator=(const Intern &assign)
{
	(void) assign;
	return *this;
}


Form *Intern::makeForm(std::string name, std::string target)
{
	Form *formSelect = NULL;
	t_form formlist[] =
	 				{{"Robotomy request", new RobotomyRequestForm(target)},
					{"Presidential pardon", new PresidentialPardonForm(target)},
					{"Shrubbery creation", new ShrubberyCreationForm(target)}};
	for (int i = 0; i < 3; i++)	
	{
		if (name == formlist[i]._formName)
			formSelect = formlist[i]._form;
		else
			delete formlist[i]._form;
	}
	if (formSelect == NULL)
	{
		std::cout << "Ce formulaire n'existe pas. " << std::endl;
	}
	else 
		std::cout << "intern create the form required ! ";
	return (formSelect);


}

