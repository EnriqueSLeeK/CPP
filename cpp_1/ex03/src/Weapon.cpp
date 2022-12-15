#include "Weapon.hpp"

Weapon::Weapon () {
    type = "";
}

Weapon::Weapon (std::string weapon_type) {
    type = weapon_type;
}

void    Weapon::setType ( std::string weapon ) {
    type = weapon;
}

std::string Weapon::getType ( void ) { return (type); }

