#ifndef MutantStack_HPP
# define MutantStack_HPP

# include <iostream>
# include <string>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		// Constructors
		MutantStack() {};
		MutantStack(const MutantStack &copy) {
		*this = copy;
		};
		
		// Destructor
		~MutantStack() {};
		
		// Operators
		MutantStack & operator=(const MutantStack &assign);
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return (this->c.begin());
		}
		iterator end()
		{
			return (this->c.end());
		}
		
	private:
		
};

#endif