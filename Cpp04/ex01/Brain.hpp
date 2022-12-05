#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		// Constructors
		Brain();
		Brain(const Brain &copy);
		Brain(std::string idead);
		
		// Destructor
		~Brain();
		
		// Operators
		Brain & operator=(const Brain &assign);
		
		// Getters / Setters
		std::string getIdead() const;
		
	private:
		std::string _idea[100];
		
};

#endif