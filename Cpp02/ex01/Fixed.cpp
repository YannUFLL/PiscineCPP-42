#include "Fixed.hpp"
#include <cmath>

const int Fixed::m_nbBits = 8;


#include <iostream>


Fixed::Fixed():m_raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value):m_raw(0)
{
	std::cout << "Int constructor called " << std::endl;
	m_raw = value << 8;
}

Fixed::Fixed(const float value):m_raw(0)
{
	std::cout << "Float constructor called " << std::endl;
	int power = pow(2, this->m_nbBits);
	m_raw = roundf(power * value);
	return ; 
}

Fixed::Fixed(Fixed const &fixedToCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixedToCopy;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl; 
}

float Fixed::toFloat(void) const
{ 
	float fNumber;
	int power = pow(2, this->m_nbBits);
	fNumber = (m_raw);
	fNumber /= power;
	return (fNumber);
}

int Fixed::toInt( void ) const
{
	int intNumber;
	intNumber = roundf(m_raw / 256);
	return (intNumber); 
}



void	Fixed::setRawBits(int const raw)
{
	m_raw = raw;
}

int		Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member functiomn called" << std::endl;
	return(m_raw);
}

std::ostream& operator<<(std::ostream &flux, Fixed const& fixed)
{
	float number; 

	number = fixed.getRawBits();
	number /= 256; 

	flux << number;
    return flux;
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