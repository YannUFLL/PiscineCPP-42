#include <iostream>
#include "iter.hpp"



int main()
{
int tab[8] = {4,7,6,1,2,8,14,16};
std::string tabString[2] = {"bonjour", "au revoir"};

iter<std::string>(tabString, 2, &func);
iter<int>(tab, 8, &func);
}
