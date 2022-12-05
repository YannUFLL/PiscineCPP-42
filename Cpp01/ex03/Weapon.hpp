#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iomanip>
#include <string>
#include <iostream>


class Weapon
{
	public : 
		Weapon(std::string new_type);
		std::string const &getType() const;
		void setType(std::string type);
	private : 
		std::string type;
};

#endif