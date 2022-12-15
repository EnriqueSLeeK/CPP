#include "HumanB.hpp"
#include <iostream>
#include <ostream>

HumanB::HumanB ( std::string nameH ) {
    name = nameH;
    weapon = NULL;
}

void    HumanB::setWeapon ( Weapon &weaponH ) {
    weapon = &weaponH;
}

void    HumanB::attack ( void ) {
    if (weapon == NULL) {
        std::cout << name << 
            " attacks bare handed!" << std::endl;
        return ;
    }
    std::cout << name << " attacks with their "
        << weapon->getType() << std::endl;
}
