#include "Zombie.hpp"
#include <iostream>
#include <ostream>

std::string create_string( const char *name ) {
    std::string converted = name;
    return (converted);
}

int main() {
    
    int n = 5;
    Zombie  *zombieArmy = zombieHorde(5, "Joy");
    for (int i = 0; i < n; i++)
        zombieArmy[i].announce();
    delete[] zombieArmy;
}

