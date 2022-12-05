#include "Form.hpp"

// Constructors
Form::Form(): __name(""), __rRequiredToSign(0), __rRequiredToExecute(0)
{
	__formSigned = 0;
	std::cout << "\e[0;33mDefault Constructor called of Form\e[0m" << std::endl;
}

Form::Form(std::string name, int rToSign, int rToExe): __name(name), __rRequiredToSign(rToSign), __rRequiredToExecute(rToExe), __formSigned(0)
{
	checkGrade(rToSign, rToExe);
	std::cout << "\e[0;33mConstructor overload called of Form\e[0m" << std::endl;
}

Form::Form(const Form &copy): __name(copy.get_name()), __rRequiredToSign(copy.get_requiredSign()), __rRequiredToExecute(copy.get_requiredExe()), __formSigned(copy.get_signed())
{
	__formSigned = copy.get_signed();
	std::cout << "\e[0;33mCopy Constructor called of Form\e[0m" << std::endl;
}

Form::Form(std::string name, bool ifSigned, int rRequiredToSign, int rRequiredToExecute):
 __name(name), __rRequiredToSign(rRequiredToSign), __rRequiredToExecute(rRequiredToExecute), __formSigned(ifSigned)
{
	std::cout << "\e[0;33mFields Constructor called of Form\e[0m" << std::endl;
}


// Destructor
Form::~Form()
{
	std::cout << "\e[0;31mDestructor called of Form\e[0m" << std::endl;
}

void Form::checkGrade(int sign, int exe) const
{
		if (sign > 150 || exe > 150)
		{
			throw Form::GradeTooLowException();
		}
		else if (sign < 1 || exe < 1) 
		{
			throw Form::GradeTooHighException();
		}
}


void	Form::beSigned(Bureaucrate const & bur)
{
	if (bur.getRank() > __rRequiredToSign)
		throw Form::GradeTooLowException();
	else 
		__formSigned = 1;
}

// Operators
Form & Form::operator=(const Form &assign)
{
	__formSigned = assign.get_signed();
	std::cout << "Name and grade to sign and to execute can't be overwriten, only signed state was copied" << std::endl;
	return *this;
}


// Getters / Setters
std::string Form::get_name() const
{
	return __name;
}

int Form::get_requiredSign() const
{
	return __rRequiredToSign;
}

int Form::get_requiredExe() const
{
	return __rRequiredToExecute;
}

bool Form::get_signed() const
{
	return __formSigned;
}

std::ostream& operator<<(std::ostream& flux, Form const &form)
{
	flux << form.get_name() << std::endl << "Requiered the rank : " << form.get_requiredSign() << " to be signed;" << std::endl << 
	"Required the rank : " << form.get_requiredExe() << " to be executed. ";
	return (flux);
}
