#include "Zombie.hpp"
#include <iostream>
#include <ostream>

std::string create_string( const char *name ) {
    std::string converted = name;
    return (converted);
}

int main() {
    
    std::string name[5] = { create_string("Jal"),
        create_string("Jel"), create_string("Jil"),
        create_string("Jol"), create_string("Jul") };
    Zombie *zombie[5] = {newZombie(name[0]),
                            newZombie(name[1]),
                            newZombie(name[2]),
                            newZombie(name[3]),
                            newZombie(name[4])};
    std::cout << "Heap allocation" << std::endl;
    for (int i = 0; i < 5; i++) {
        zombie[i] -> announce();
        delete zombie[i];
    }

    std::cout << "Stack allocation" << std::endl;
    randomChump(name[0]);
    randomChump(name[1]);
    randomChump(name[2]);
    randomChump(name[3]);
    randomChump(name[4]);
}

