#include "Bureaucrate.hpp"

// Constructors
Bureaucrate::Bureaucrate()
{
	std::cout << "\e[0;33mDefault Constructor called of Bureaucrate\e[0m" << std::endl;
}


Bureaucrate::Bureaucrate(std::string name, int grade): _name(name)
{
	checkGrade(grade);
	_grade = grade;
	
}

Bureaucrate::Bureaucrate(const Bureaucrate &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Bureaucrate\e[0m" << std::endl;
}


// Destructor
Bureaucrate::~Bureaucrate()
{
	std::cout << "\e[0;31mDestructor called of Bureaucrate\e[0m" << std::endl;
}


// Operators
Bureaucrate & Bureaucrate::operator=(const Bureaucrate &assign)
{
	(void) assign;
	return *this;
}

void Bureaucrate::checkGrade(int grade) const
{
		if (grade > 150)
		{
			throw Bureaucrate::GradeTooHighException();
		}
		else if (grade < 1) 
		{
			throw Bureaucrate::GradeTooLowException();
		}
}


void	Bureaucrate::raiseRank() 
{
	int newgrade;
	newgrade = _grade - 1;
	checkGrade(newgrade);
	_grade = newgrade;
}

void	Bureaucrate::lowerRank()
{
	int newgrade;
	newgrade = _grade + 1;
	checkGrade(newgrade);
	_grade = newgrade;
}

std::string	Bureaucrate::getName() const
{
	return (_name);
}

int	Bureaucrate::getRank() const
{
	return (_grade);
}

std::ostream& operator<<(std::ostream& flux, Bureaucrate const &bu)
{
	flux << bu.getName() << ", bureaucrate grade " << bu.getRank();  
	return (flux);
}

void Bureaucrate::signForm(Form &form) const
{
	try 
	{
		form.beSigned(*this);
	}
	catch (std::exception& e)
	{
		std::cout << *this << " couldn't signed " << form << " because : " << e.what() << std::endl  << std::endl;
		return;
	}
	std::cout << *this << " signed " << form << std::endl << std::endl;
}

	void		Bureaucrate::executeForm(Form &form) const
	{
	try 
	{
		form.execute(*this);
	}
	catch (std::exception& e)
	{
		std::cout << *this << " couldn't execute " << form << " because : " << e.what() << std::endl << std::endl;
		return;
	}
	std::cout << *this << " Form executed : " << form << std::endl  << std::endl;
}
