#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main()
{
	Animal *tab[8];
	for (int i = 0; i < 4; i++)
		tab[i] = new Dog();
	for (int i = 4; i < 8; i++)
		tab[i] = new Cat();
	tab[2]->makeSound();
	tab[3]->makeSound();
	tab[5]->makeSound();
	for (int i = 0; i < 8; i++)
		delete tab[i];
}