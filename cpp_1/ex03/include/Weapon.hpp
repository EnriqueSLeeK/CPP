#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon {

    private:
        std::string type;

    public:
        Weapon ();
        Weapon ( std::string weapon_type );

        void        setType ( std::string weapon );
        std::string getType ( void );
};

#endif
