#include "Bureaucrate.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form form("cerfa", 5, 180);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Form cerfa("cerfa", 5, 30);

	if (cerfa.get_signed())
		std::cout << "The form is signed" << std::endl;
	else
		std::cout << "The form is not signed" << std::endl;
	Bureaucrate martin("Martin", 4);
	martin.signForm(cerfa);
	if (cerfa.get_signed())
		std::cout << "The form is signed" << std::endl;
	else
		std::cout << "The form is not signed" << std::endl;
	Bureaucrate joe("Joe", 4);
	joe.signForm(cerfa);
	if (cerfa.get_signed())
		std::cout << "The form is signed" << std::endl;
	else
		std::cout << "The form is not signed" << std::endl;
	Bureaucrate bernard("Bernard", 8);
	bernard.signForm(cerfa);
	if (cerfa.get_signed())
		std::cout << "The form is signed" << std::endl;
	else
		std::cout << "The form is not signed" << std::endl;

	try
	{
		Form cerfa2("cerfa2", 151, -1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;

	}
}