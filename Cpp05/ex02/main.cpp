#include "Bureaucrate.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	std::srand(time(NULL));
	Form *form1 = new ShrubberyCreationForm("Garden");
	Form *form2 = new PresidentialPardonForm("Gabin");
	Form *form3 = new RobotomyRequestForm("Wall-e");
	Bureaucrate gabin("Gabin", 150);
	gabin.executeForm(*form1);

	Bureaucrate boustiflore("Boustiflore", 110);
	boustiflore.executeForm(*form1);
	boustiflore.executeForm(*form1);
	boustiflore.signForm(*form1);
	boustiflore.executeForm(*form1);
	boustiflore.signForm(*form2);
	boustiflore.executeForm(*form2);
	boustiflore.signForm(*form3);
	boustiflore.executeForm(*form3);


	Bureaucrate bigBoss("BigBoss", 1);
	bigBoss.signForm(*form2);
	bigBoss.executeForm(*form2);
	bigBoss.signForm(*form3);
	bigBoss.executeForm(*form3);

	delete form1;
	delete form2;
	delete form3;
}