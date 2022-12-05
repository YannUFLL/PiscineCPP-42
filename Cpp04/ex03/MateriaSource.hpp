#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		// Constructors
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		
		// Destructor
		~MateriaSource();
		
		// Operators
		MateriaSource & operator=(const MateriaSource &assign);

		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const & type);
	private:
		AMateria *_materia[4];
		
};

#endif