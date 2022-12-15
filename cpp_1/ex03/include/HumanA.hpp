#ifndef HUMAN_A_H
# define HUMAN_A_H

#include "Weapon.hpp"
#include <string>

class HumanA {

    private:
        std::string name;
        Weapon      &weapon;
        HumanA ();

    public:
        HumanA (std::string nameH, Weapon &weaponH);
        void setWeapon ( Weapon &weaponH );
        void attack ( void );
};

#endif
