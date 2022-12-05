#ifndef Fixed_HPP
#define Fixed_HPP

#include <iomanip>
#include <iostream>
#include <string>

class Fixed
{
	public :
		Fixed();
		~Fixed();
		Fixed(Fixed const &fixedToCopy);
		Fixed &operator=(Fixed const &Fixed);
		int	getRawBits(void) const;
		void setRawBits(int const raw);
	private :
		int m_raw;
		const static int m_nbBits;
};

#endif

