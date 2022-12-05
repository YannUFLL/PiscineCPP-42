#ifndef HUMANA_HPP
#define	HUMANA_HPP

#include <cstring>
#include <iostream>

#include "Weapon.hpp"

class HumanA
{
	public :
		HumanA(std::string newName, Weapon &type);
		void	attack() const;
	private :
		std::string name;
		Weapon &weapon;
};

#endif