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

	Fixed& Fixed::min(Fixed &fixedA, Fixed &fixedB)
	{
		if (fixedA < fixedB)
			return (fixedA);
		else 
			return (fixedB);
	}

	const Fixed& Fixed::min(Fixed const &fixedA, Fixed const &fixedB)
	{
		if (fixedA < fixedB)
			return (fixedA);
		else 
			return (fixedB);

	}
	Fixed& Fixed::max(Fixed &fixedA, Fixed &fixedB)
	{
		if (fixedA > fixedB)
			return (fixedA);
		else 
			return (fixedB);

	}
	const Fixed& Fixed::max(Fixed const &fixedA, Fixed const &fixedB)
	{
		if (fixedA > fixedB)
			return (fixedA);
		else 
			return (fixedB);

	}

bool Fixed::operator>(Fixed const& fixedB) const
{
	if (this->m_raw > fixedB.m_raw)
		return (true);
	else 
		return (false);
}

bool Fixed::operator<(Fixed const& fixedB) const
{
	if (this->m_raw < fixedB.m_raw)
		return (true);
	else 
		return (false);

}

bool Fixed::operator>=(Fixed const& fixedB) const
{
	if (this->m_raw >= fixedB.m_raw)
		return (true);
	else 
		return (false);
}

bool Fixed::operator<=(Fixed const& fixedB) const
{
	if (this->m_raw <= fixedB.m_raw)
		return (true);
	else 
		return (false);
}

bool Fixed::operator==(Fixed const& fixedB) const
{
	if (this->m_raw == fixedB.m_raw)
		return (true);
	else 
		return (false);
}

bool Fixed::operator!=(Fixed const& fixedB) const
{
	if (this->m_raw != fixedB.m_raw)
		return (true);
	else 
		return (false);

}

Fixed Fixed::operator+(Fixed const& fixedB) const
{
	Fixed result(this->toFloat() + fixedB.toFloat());
	return (result);
}

Fixed Fixed::operator-(Fixed const& fixedB) const
{
	Fixed result(this->toFloat() - fixedB.toFloat());
	return (result);
}

Fixed Fixed::operator*(Fixed const& fixedB) const
{
	Fixed result(this->toFloat() * fixedB.toFloat()); 
	return (result);
}

Fixed Fixed::operator/(Fixed const& fixedB) const
{
	Fixed result (this->toFloat() / fixedB.toFloat());
	return (result);
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

std::ostream& operator<<(std::ostream &flux, Fixed const& fixed)
{
	float number; 

	number = fixed.getRawBits();
	number /= 256; 

	flux << number;
    return flux;
}

Fixed& Fixed::operator++()
{
	m_raw += 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this; 
	++*this; 
	return (temp);
}

Fixed& Fixed::operator--()
{
	m_raw -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this; 
	--*this; 
	return (temp);
}