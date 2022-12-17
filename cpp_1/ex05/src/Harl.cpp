/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:48:47 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/15 16:48:53 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <ostream>

void    Harl::debug ( void ) {
    std::cout << "I love having extra bacon for my 8XL-double";
    std::cout << "-cheese-triple-pickle-special-";
    std::cout << "ketchup burger. I really do!" << std::endl;
}

void    Harl::info ( void ) {
    std::cout << "I cannot believe adding extra bacon costs more";
    std::cout << " money. You didn’t put enough bacon in my burger! ";
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning ( void ) {
    std::cout << "I think I deserve to have some extra bacon for";
    std::cout << " free. I’ve been coming for years whereas you ";
    std::cout << "started working here since last month." << std::endl;
}

void    Harl::error ( void ) {
    std::cout << "This is unacceptable! I want to speak to ";
    std::cout << "the manager now." << std::endl;
}

void    Harl::complain ( std::string speak) {

    const char  *levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    speak_method speaking[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++) {
        if (speak == levels[i]) {
            (this->*speaking[i])();
            break ;
        }
    }
}
