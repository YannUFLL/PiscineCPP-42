#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {


std::string gabinStr = "Gabin";
std::string boustifloreStr = "Boustiflore";

 ScavTrap boustiflore(boustifloreStr);
 ScavTrap gabin(gabinStr);

gabin.attack(boustifloreStr);
gabin.attack(boustifloreStr);
boustiflore.beRepaired(10);
boustiflore.attack(gabinStr);
gabin.attack(boustifloreStr);
gabin.attack(boustifloreStr);
 }