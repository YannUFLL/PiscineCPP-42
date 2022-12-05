#include "ShrubberyCreationForm.hpp"

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm(): _target("")
{
	std::cout << "\e[0;33mDefault Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Shrubbery creation", 145, 137), _target(target)
{
	std::cout << "\e[0;33mOverload Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}


// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\e[0;31mDestructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrate const & executor)
{
	if (executor.getRank() > get_requiredExe())
		throw Form::GradeTooLowException(); 
	if (!get_signed())
		throw Form::NotSignedException();
		std::string fileName;
	fileName = _target + "_shrubbery";
	std::ofstream monflux(fileName);
monflux << "	oxoxoo    ooxoo" << std::endl;
monflux << "  ooxoxo oo  oxoxooo" << std::endl;
monflux << " oooo xxoxoo ooo ooox" << std::endl;
monflux << " oxo o oxoxo  xoxxoxo" << std::endl;
monflux << "  oxo xooxoooo o ooo" << std::endl;
monflux << "    ooo\\oo\\  /o/o" << std::endl;
monflux << "        \\  \\/ / " << std::endl;
monflux << "         |   /  " << std::endl;
monflux << "         |  |   " << std::endl;
monflux << "         | D|   " << std::endl;
monflux << "         |  |   " << std::endl;
monflux << "         |  |   " << std::endl;
monflux << "  ______/____\\____" << std::endl;

}


// Operators
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	(void) assign;
	return *this;

}

