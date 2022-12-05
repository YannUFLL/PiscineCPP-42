#include "Bureaucrate.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	std::srand(time(NULL));
	Intern Titouan;
	Form *form;

	form = Titouan.makeForm("Presidential pardon", "Romain");
	Bureaucrate Sylvain("Sylvain", 4);
	if (form)
	{
		Sylvain.signForm(*form);
		Sylvain.executeForm(*form);

	}
	delete form;

	form = Titouan.makeForm("formulaire qui n existe pas", "Romain");
	if (form)
	{
		Sylvain.signForm(*form);
		Sylvain.executeForm(*form);
	}
	delete form;

	form = Titouan.makeForm("Robotomy request", "Chapi");
	if (form)
	{
		Sylvain.signForm(*form);
		Sylvain.executeForm(*form);
	}
	delete form;

}