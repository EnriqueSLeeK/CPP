/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:57:56 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/22 19:33:18 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#include <iostream>
#include <ostream>

DiamondTrap::DiamondTrap (void) : ClapTrap() {
    name = "";
    hp = FragTrap::hp;
    energy = ScavTrap::energy;
    attack_point = FragTrap::attack_point;
    std::cout << "DiamondTrap created!" << std::endl;
}

DiamondTrap::DiamondTrap (std::string nameC) : ClapTrap(nameC + "_clap_name") {
    name = nameC;
    hp = FragTrap::hp;
    energy = ScavTrap::energy;
    attack_point = FragTrap::attack_point;
    std::cout << "DiamondTrap: " << name << " created!" << std::endl;
}

DiamondTrap::DiamondTrap (const DiamondTrap &obj) : ClapTrap(obj), ScavTrap(obj), FragTrap(obj) {
    *this = obj;
    std::cout << "DiamondTrap " << name << " cloned!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj) {
    name = obj.name;
    hp = obj.hp;
    energy = obj.energy;
    attack_point = obj.attack_point;
    std::cout << "DiamondTrap assign copy " << name << std::endl;
    return (*this);
}

DiamondTrap::~DiamondTrap (void) {
    std::cout << "Diamonds are supposed to be unbreakable!"
        << std::endl;
}

void DiamondTrap::attack (const std::string &target) {
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI (void) {
    std::cout << "My base identity is " << ClapTrap::name
        << " and my newest identity is " << name << "!"
        << std::endl;
}
