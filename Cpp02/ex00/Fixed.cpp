#include "Fixed.hpp"

const int Fixed::m_nbBits = 8;

Fixed::Fixed():m_raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixedToCopy)

{
	std::cout << "Copy constructor called" << std::endl;
	m_raw = fixedToCopy.getRawBits(); 
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl; 
}

void	Fixed::setRawBits(int const raw)
{
	m_raw = raw;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member functiomn called" << std::endl;
	return(m_raw);
}

Fixed& Fixed::operator=(Fixed const& fixedToCopy) 
{
	std::cout << "Copy assignement operator called" << std::endl;
    if(this != &fixedToCopy)
    {
		m_raw = fixedToCopy.getRawBits(); 
    }
    return *this; 
}