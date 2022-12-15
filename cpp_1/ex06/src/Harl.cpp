#include "Harl.hpp"
#include <iostream>
#include <ostream>

void    Harl::debug ( void ) {
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 8XL-double";
    std::cout << "-cheese-triple-pickle-special-";
    std::cout << "ketchup burger. I really do!" << std::endl;
}

void    Harl::info ( void ) {
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more";
    std::cout << " money. You didn’t put enough bacon in my burger! ";
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning ( void ) {
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for";
    std::cout << " free. I’ve been coming for years whereas you ";
    std::cout << "started working here since last month." << std::endl;
}

void    Harl::error ( void ) {
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to ";
    std::cout << "the manager now." << std::endl;
}

void    Harl::complain ( std::string speak) {

    int level;
    const char  *levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++) {
        if (speak == levels[i]) {
            level = i;
            break ;
        }
    }

    switch (level) {
        case DEBUG:
            debug();
            std::cout << std::endl;
        case INFO:
            info();
            std::cout << std::endl;
        case WARNING:
            warning();
            std::cout << std::endl;
        case ERROR:
            error();
            std::cout << std::endl;
        default:
            break ;
    }
}
