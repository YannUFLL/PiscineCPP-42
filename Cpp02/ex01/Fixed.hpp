#ifndef Fixed_HPP
#define Fixed_HPP

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
		Fixed& operator=(Fixed const &Fixed);
	private :
		int m_raw;
		const static int m_nbBits;
};
std::ostream& operator<<(std::ostream &flux, Fixed const& fixed);


#endif

