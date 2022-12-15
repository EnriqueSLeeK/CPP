#ifndef HUMAN_B_H
# define HUMAN_B_H

#include "Weapon.hpp"
#include <string>

class HumanB {

    private:
        std::string name;
        Weapon      *weapon;

    public:
        HumanB ( std::string nameH );
        void setWeapon ( Weapon &weaponH );
        void attack ( void );
};

#endif
