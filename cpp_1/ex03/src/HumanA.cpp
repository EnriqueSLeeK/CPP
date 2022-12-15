#include "HumanA.hpp"
#include <iostream>
#include <ostream>

HumanA::HumanA ( std::string nameH, Weapon &weaponH ) : weapon(weaponH) {
    name = nameH;
}

void    HumanA::setWeapon ( Weapon &weaponH ) {
    weapon = weaponH;
}

void    HumanA::attack ( void ) {
    std::cout << name 
        << " attacks with their weapon "
        << weapon.getType() << std::endl;
}
