#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character: public ICharacter 
{
	public:
		// Constructors
		Character();
		Character(std::string name);
		Character(const Character &copy);
		
		// Destructor
		~Character();
		
		// Operators
		Character & operator=(const Character &assign);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		
	private:
		AMateria *_materia[4];
		std::string _name;
		static AMateria **_unequipMateria;
		static int	_nbrUnequipMateria;
		
};

#endif