#include <iostream>
#include "Data.hpp" 


uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
	
}

int main(int argc, char **argv)
{
	Data *ptr = new Data();
	uintptr_t ptr2;
	std::cout << ptr << std::endl;
	ptr2 = serialize(ptr);
	std::cout << ptr2 << std::endl; 
	ptr = deserialize(ptr2);
	std::cout << ptr << std::endl; 
	delete (ptr);
}
