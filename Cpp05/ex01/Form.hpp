#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrate.hpp"

class Bureaucrate;

class Form
{
	public:
		// Constructors
		Form(std::string name, int rToSign, int rToExe);
		Form(const Form &copy);
		Form(std::string name, bool ifSigned, int rRequiredToSign, int rRequiredToExecute);
		
		// Destructor
		~Form();
		
		// Operators
		Form & operator=(const Form &assign);
		
		// Getters / Setters
		std::string get_name() const;
		int get_requiredSign() const;
		int get_requiredExe() const;
		bool get_signed() const;
		void beSigned(Bureaucrate& bur);
		
	private:
		void	checkGrade(int sign, int exe) const;
		Form();
		std::string const __name;
		bool __formSigned;
		int const __rRequiredToSign;
		int const __rRequiredToExecute;

	public :
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("\e[0;31mFailed to set the Rank, the Grade is Too Low.\e[0m ");
				}
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("\e[0;31mFailed to set the Rank, the Grade is Too high.\e[0m ");
				}
		};
		
};

std::ostream& operator<<(std::ostream& flux, Form const &form);

#endif