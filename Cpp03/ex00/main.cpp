#include "ClapTrap.hpp"

int main( void ) {


std::string gabinStr = "Gabin";
std::string morpheusStr = "Morpheus";

 ClapTrap gabin(gabinStr);
 ClapTrap morpheus(morpheusStr);

 gabin.attack(morpheusStr);
 gabin.attack(morpheusStr);
 morpheus.attack(gabinStr);
 gabin.attack(morpheusStr);
 ClapTrap::clean();
 
 }