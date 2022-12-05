#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void ) {


std::string gabinStr = "Gabin";
std::string boustifloreStr = "Boustiflore";

DiamondTrap boustiflore(boustifloreStr);
boustiflore.whoAmI();
boustiflore.attack(gabinStr);
//FragTrap gabin(gabinStr);

//boustiflore.highFivesGuys();
 }