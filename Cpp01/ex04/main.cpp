#include "sed.hpp"

int main(int argc, char **argv)
{
	if (argc > 4)
		std::cout << "Too many argument, 3 arguments required" << std::endl;
	if (argc < 4)
		std::cout << "Not enough arguments, 3 arguments required" << std::endl;
	else
	{
		std::string nameFile2;
		std::string nameFile1;
		std::string s1;
		std::string s2;
		nameFile1 = argv[1];
		nameFile2 = nameFile1 + ".replace";
		s1 = argv[2];
		s2 = argv[3];
		Sed test(nameFile1, nameFile2, s1, s2);
		test.startSed();
	}
}
