#ifndef HUMANB_HPP
#define	HUMANB_HPP

#include <cstring>
#include <iostream>

#include "Weapon.hpp"

class HumanB
{
	public :
		HumanB(std::string newName);
		void	setWeapon(Weapon &type);
		void	attack() const;
	private :
		std::string name;
		Weapon *weapon;
};

#endif