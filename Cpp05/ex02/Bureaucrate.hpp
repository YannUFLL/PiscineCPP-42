#ifndef BUREAUCRATE_HPP
# define BUREAUCRATE_HPP

# include <iostream>
# include <string>

# include "Form.hpp"

class Form;

class Bureaucrate
{
	public:
		// Constructors
		Bureaucrate(const Bureaucrate &copy);
		Bureaucrate(std::string name, int grade);
		
		// Destructor
		~Bureaucrate();
		
		// Operators
		Bureaucrate & operator=(const Bureaucrate &assign);
		std::string	getName() const;
		int			getRank() const;
		void		raiseRank();
		void		lowerRank();
		void		signForm(Form &form) const;
		void		executeForm(Form &form) const;

		
	private:
		Bureaucrate();
		std::string const _name;
		int			_grade;
		void	checkGrade(int grade) const;

	public : 
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("\e[0;31mFailed, the Grade is Too Low\e[0m ");
				}
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("\e[0;31mFailed, the Grade is Too hight\e[0m ");
				}
		};
};
std::ostream& operator<<(std::ostream& flux, Bureaucrate const &bu);

#endif