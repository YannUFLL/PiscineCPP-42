#include "Weapon.hpp"

Weapon::Weapon(std::string new_type): type(new_type)
{

}

std::string const &Weapon::getType() const
{
	return (type);
}

void Weapon::setType(std::string new_type)
{
	type = new_type;
}