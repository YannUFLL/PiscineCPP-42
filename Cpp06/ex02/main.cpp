#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string>

#include "Classes.hpp"

Base *generate(void)
{
	Base *ptr; 
	int i;
	i = std::rand() % 3;
	if (i == 0)
	{
		ptr = new A();
		std::cout << "Objet de type A cree" << std::endl;
	}
	if (i == 1)
	{
		ptr = new B();
		std::cout << "Objet de type B cree" << std::endl;
	}
	if (i == 2)
	{
		ptr = new C();
		std::cout << "Objet de type C cree" << std::endl;
	}
	return (ptr);
}

void identify(Base* p)
{
	Base *ptr = NULL;
	ptr = dynamic_cast<A *>(p);
	if (ptr != NULL)
		std::cout << "Le veritable type de l'objet est classe A" << std::endl;
	ptr = dynamic_cast<B *>(p);
	if (ptr != NULL)
		std::cout << "Le veritable type de l'objet est classe B" << std::endl;
	ptr = dynamic_cast<C *>(p);
	if (ptr != NULL)
		std::cout << "Le veritable type de l'objet est classe C" << std::endl;
}

void identify(Base& p)
{
	int i = 1;
	try 
	{
		Base & x = dynamic_cast<A &>(p);
	}
	catch (std::bad_cast &bc)
	{
		i = 0;
	}
	if (i == 1)
		std::cout << "Le veritable type de l'objet est classe A" << std::endl;
	i = 1;
	try 
	{
		Base & x =dynamic_cast<B &>(p);
	}
	catch (std::bad_cast &bc)
	{
		i = 0;
	}
	if (i == 1)
		std::cout << "Le veritable type de l'objet est classe B" << std::endl;
	i = 1;
	try 
	{
		Base & x =dynamic_cast<C &>(p);
	}
	catch (std::bad_cast &bc)
	{
		i = 0;
	}
	if (i == 1)
		std::cout << "Le veritable type de l'objet est classe C" << std::endl;
}

int main()
{
	srand(time(0));
	Base *ptr;
	ptr = generate();
	identify(ptr);
	ptr = generate();
	Base &ptr2 = *ptr;
	identify(ptr2);
}
