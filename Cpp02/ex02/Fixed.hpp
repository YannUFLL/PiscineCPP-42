#ifndef FIXED_HPP
#define FIXED_HPP

#include <iomanip>
#include <iostream>
#include <string>

class Fixed
{
	public :
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
		Fixed(Fixed const &fixedToCopy);
		float toFloat(void) const;
		int toInt(void) const;
		int	getRawBits(void) const;
		void setRawBits(int const raw);
		static Fixed& min(Fixed &fixedA, Fixed &fixedB);
		static const Fixed& min(Fixed const &fixedA, Fixed const &fixedB);
		static Fixed& max(Fixed &fixedA, Fixed &fixedB);
		static const Fixed& max(Fixed const &fixedA, Fixed const &fixedB);
		Fixed& operator=(Fixed const &fixedToCopy);
		bool operator>(Fixed const& fixedB) const;
		bool operator<(Fixed const& fixedB) const ;
		bool operator>=(Fixed const& fixedB) const ;
		bool operator<=(Fixed const& fixedB) const ;
		bool operator==(Fixed const& fixedB) const ;
		bool operator!=(Fixed const& fixedB) const ;
		Fixed operator+(Fixed const& fixedB) const ;
		Fixed operator-(Fixed const& fixedB) const ;
		Fixed operator*(Fixed const& fixedB) const ;
		Fixed operator/(Fixed const& fixedB) const ;
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
	private :
		int m_raw;
		const static int m_nbBits;
};
std::ostream& operator<<(std::ostream &flux, Fixed const& fixed);


#endif

