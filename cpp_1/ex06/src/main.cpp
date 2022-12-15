#include "Harl.hpp"
#include <iostream>
#include <ostream>

int main(int argc, char *argv[]) {

    if (argc != 2) {
        std::cerr << "Usage: ./HarlHarr <level of complain>" << std::endl;
        return (1);
    }
    std::string speak(argv[1]);
    Harl    harl;
    harl.complain(speak);
    return (0);
}
