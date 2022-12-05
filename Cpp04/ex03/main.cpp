#include "Character.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main() {

IMateriaSource* src = new MateriaSource();

src->learnMateria(new Ice());
src->learnMateria(new Cure());
src->learnMateria(new Cure());
src->learnMateria(new Cure());
src->learnMateria(new Cure());

ICharacter* me = new Character("me");
AMateria* tmp;

tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);

ICharacter* bob = new Character("bob");
ICharacter* Canarticho = new Character("Canarticho");
me->use(0, *bob);
me->use(1, *bob);
bob->use(2, *bob);
bob->use(2, *bob);
tmp = src->createMateria("ice");
Canarticho->equip(tmp);
Canarticho->use(0, *me);
Canarticho->unequip(0);
Canarticho->use(0, *me);

delete src;
delete me;
delete bob;
delete Canarticho;
return 0; 
}
/*int main() {

IMateriaSource* src = new MateriaSource();

src->learnMateria(new Ice());
src->learnMateria(new Cure());

ICharacter* me = new Character("me");
AMateria* tmp;

tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);

ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);

delete bob;
delete me;
delete src;
return 0; 
}*/