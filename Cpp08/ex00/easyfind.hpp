#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <iomanip>
#include <vector>



template < typename T>  
typename T::iterator easyfind(T &a, int b)
{
	typename T::iterator it = (find(a.begin(), a.end(), b)) ;
	if (it == a.end())
		throw std::exception();
	return (it);
}

#endif