/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:48:48 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/16 13:31:50 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <ostream>

void    Harl::debug ( void ) {
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 8XL-double";
    std::cout << "-cheese-triple-pickle-special-";
    std::cout << "ketchup burger. I really do!" << std::endl;
    std::cout << std::endl;
    info();
}

void    Harl::info ( void ) {
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more";
    std::cout << " money. You didn’t put enough bacon in my burger! ";
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
    std::cout << std::endl;
    warning();
}

void    Harl::warning ( void ) {
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for";
    std::cout << " free. I’ve been coming for years whereas you ";
    std::cout << "started working here since last month." << std::endl;
    std::cout << std::endl;
    error();
}

void    Harl::error ( void ) {
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to ";
    std::cout << "the manager now." << std::endl;
    std::cout << std::endl;
}

void    Harl::complain ( std::string speak) {

    int level = -1;
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
            break ;
        case INFO:
            info();
            break ;
        case WARNING:
            warning();
            break ;
        case ERROR:
            error();
            break ;
        default:
            std::cout <<
                "[ Problably complaining about insignificant problems ]" << std::endl;
    }
}
