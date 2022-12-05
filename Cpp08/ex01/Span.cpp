#include "Span.hpp"

// Constructors
Span::Span()
{
	std::cout << "\e[0;33mDefault Constructor called of Span\e[0m" << std::endl;
}

Span::Span(int N): _N(N), _nbrNumber(0)
{
	_tab = new int[N];
	std::cout << "\e[0;33mOverload Constructor called of Span\e[0m" << std::endl;
}

Span::Span(const Span &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Span\e[0m" << std::endl;
}

void	Span::addNumber(int nbr)
{
	if (_nbrNumber < _N)
	{
		_tab[_nbrNumber] = nbr;
		_nbrNumber++;
	}
	else
		throw Span::Overflow();
}

int Span::shortestSpan()
{
	int gap = 0;
	std::sort(&_tab[0], &_tab[_nbrNumber]);
	if (_nbrNumber == 1)
		return (0);
	gap = std::abs(_tab[0] - _tab[1]);
	for (int i = 0; i < _nbrNumber - 1; i++)
	{
		if (std::abs(_tab[i] - _tab[i + 1]) < gap)
			gap = (_tab[i] - _tab[i + 1]);
	}
	return (std::abs(gap));
}

int Span::longestSpan()
{
	int gap = 0;
	std::sort(&_tab[0], &_tab[_nbrNumber - 1]);
	if (_nbrNumber == 1)
		return (0);
	gap = std::abs(_tab[0] - _tab[1]);
	for (int i = 0; i < _nbrNumber - 1; i++)
	{
		if (std::abs(_tab[i] - _tab[i + 1]) > gap)
			gap = (_tab[i] - _tab[i + 1]);
	}
	return (std::abs(gap));
}

void	Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	std::vector<int>::iterator it;
	int size = 0;
	it = start;
		while (it != end)
		{
			size++;
			it++;
		}
	if ((size + _nbrNumber > _N))
		throw Span::Overflow();
	else 
	{
		std::copy(start, end, &_tab[_nbrNumber]);
		_nbrNumber += size;
	}
}


// Destructor
Span::~Span()
{
	delete [] _tab;
	std::cout << "\e[0;31mDestructor called of Span\e[0m" << std::endl;
}


// Operators
Span & Span::operator=(const Span &assign)
{
	(void) assign;
	return *this;
}

