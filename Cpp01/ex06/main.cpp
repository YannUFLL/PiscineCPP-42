#include "Harl.hpp"


int main(int argc, char **argv)
{
	std::string str;
	if (argc != 2)
	{
		std::cout << "please just put 'warning', 'debug', 'error', 'info', not more" << std::endl;
		return (0);
	}
	str = argv[1];
	Harl harl(str); 

	harl.complain("error");
	harl.complain("debug");
	harl.complain("warning");
	harl.complain("info");
git@vogsphere.42mulhouse.fr:vogsphere/intra-uuid-6d14f062-8818-46d3-ae0b-33e81fe21a27-4411308-ydumaine	
}
