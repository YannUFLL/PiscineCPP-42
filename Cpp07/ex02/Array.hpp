#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>


template < typename T >
class Array
{
	public:
		// Constructors
		Array()
		{
			std::cout << "\e[0;33mDefault Constructor called of Array\e[0m" << std::endl;
			 _tab = NULL;
			 _nbElements = 0;
		}
		Array(unsigned int n)
		{
			_tab = new T[n];
			_nbElements = n;
			std::cout << "\e[0;33mOverload Constructor called of Array\e[0m" << std::endl;
		}
		Array(const Array &copy)
		{
			*this = copy;
			std::cout << "\e[0;33mCopy Constructor called of Array\e[0m" << std::endl;
		}
		T& operator[](int index) const
		{
			if (index >= _nbElements)
				throw std::exception();
			else 
				return (_tab[index]);
		}
		int	size() const
		{
			return (_nbElements);
		}

		// Destructor
		~Array()
		{
			if (_tab != NULL)
				delete [] _tab;
			std::cout << "\e[0;31mDestructor called of Array\e[0m" << std::endl;
		}
		
		// Operators
		Array & operator=(const Array &assign)
		{
			if (_tab != NULL)
				delete [] _tab;
			_nbElements = assign._nbElements;
			_tab = new T[_nbElements];
			for(int i = 0; i < _nbElements; i++)
			{
				_tab[i] = assign._tab[i];
			}
			return *this;
		}
		
	private:
		T *_tab;
		int	_nbElements;
		
};
#endif
