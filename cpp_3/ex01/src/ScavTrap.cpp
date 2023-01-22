/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:18:56 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/22 19:09:43 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <ostream>

ScavTrap::ScavTrap ( void ) {
    name = "";
    hp = 100;
    energy = 50;
    attack_point = 20;
    std::cout << "ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap (std::string nameC) {
    name = nameC;
    hp = 100;
    energy = 50;
    attack_point = 20;
    std::cout << "ScavTrap: " << name << " created!" << std::endl;
}

ScavTrap::ScavTrap (const ScavTrap &obj) : ClapTrap(obj) {
    *this = obj;
    std::cout << "ScavTrap cloned: " << name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj) {
    name = obj.name;
    hp = obj.hp;
    energy = obj.energy;
    attack_point = obj.attack_point;
    std::cout << "ScavTrap cloned assign: " << name << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap ( void ) {
    std::cout << "Even now i'm beaten, i will be back!" << std::endl;
}

void    ScavTrap::guardGate ( void ) {
    std::cout << "Thou shall not pass!" << std::endl;
}

void    ScavTrap::attack ( const std::string &target ) {
    if (energy < 1) {
        std::cout << "Look i'm tired of this, please let me rest..." << std::endl;
        return ;
    }
    std::cout << "Scavtrap " << name << " attacks " << target << ", "
        << "causing " << attack_point << " points of damage!"
        << std::endl;
    energy -= 1;
}
