#ifndef ITER_HPP
#define ITER_HPP


template < typename A> 
void	func(A a)
{
	std::cout << "fonction appele" << std::endl;
}

void	func(int &a)
{
	a--;
	std::cout << a << std::endl;
}

template < typename A>
void	iter(A *a, int const b, void (*function)(A &a))
{
	for (int i = 0; i < b; i++)
	{
		function(a[i]);
	}
}

#endif