#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	int j;
	j = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return(0) ;
	}
	while (j < argc)
	{
		for (unsigned int i = 0; i < strlen(argv[j]); i++)
			std::cout << (char)std::toupper(argv[j][i]);
		j++;
	}
	std::cout << std::endl;
}