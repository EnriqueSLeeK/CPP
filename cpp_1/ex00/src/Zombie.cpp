#include "Zombie.hpp"
#include <iostream>
#include <ostream>

Zombie::Zombie (std::string nameZ): name(nameZ) {}

Zombie::~Zombie ( void ) {
    std::cout << name << std::endl;
}

void Zombie::announce ( void ) {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
