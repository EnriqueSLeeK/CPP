#include "Zombie.hpp"

Zombie  *newZombie ( std::string nameZ ) {
    Zombie  *zombie = new Zombie(nameZ);
    return (zombie);
}
