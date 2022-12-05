#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <iostream>
# include <iomanip>
# include <vector>


class Span
{
	public:
		// Constructors
		Span(const Span &copy);
		Span(int N);
		
		// Destructor
		~Span();
		
		// Operators
		Span & operator=(const Span &assign);
		void addNumber(int nbr);
		int	shortestSpan();
		int	longestSpan();
		void	addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);
		
	private:
		Span();
		int _N;
		int  _nbrNumber;
		int *_tab;

	public : 
		class Overflow: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("\e[0;31mError too many number attempt to added in Span\e[0m ");
				}
		};
		
		
};

#endif