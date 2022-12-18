/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:57:56 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/18 14:17:02 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

#include <iostream>
#include <ostream>

DiamondTrap::DiamondTrap (void) {
    name = "";
    FragTrap::setName("");
    FragTrap::setHp(FragTrap::getHp());
    FragTrap::setEnergy(ScavTrap::getEnergy());
    FragTrap::setAttack(FragTrap::getAttack());
    std::cout << "DiamondTrap created!" << std::endl;
}

DiamondTrap::DiamondTrap (std::string nameC) {
    name = nameC;
    FragTrap::setName(nameC + "_clap_name");
    FragTrap::setHp(FragTrap::getHp());
    FragTrap::setEnergy(ScavTrap::getEnergy());
    FragTrap::setAttack(FragTrap::getAttack());
    std::cout << "DiamondTrap: " << name << " created!" << std::endl;
}

DiamondTrap::DiamondTrap (const DiamondTrap &obj) : ScavTrap::ScavTrap(), FragTrap::FragTrap() {
    name = obj.name;
    FragTrap::setName(obj.name + "_clap_name");
    FragTrap::setHp(obj.FragTrap::getHp());
    FragTrap::setEnergy(obj.ScavTrap::getEnergy());
    FragTrap::setAttack(obj.FragTrap::getAttack());
    std::cout << "DiamondTrap " << name << " cloned!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj) {
    name = obj.name;
    FragTrap::setName(obj.name + "_clap_name");
    FragTrap::setHp(obj.FragTrap::getHp());
    FragTrap::setEnergy(obj.ScavTrap::getEnergy());
    FragTrap::setAttack(obj.FragTrap::getAttack());
    std::cout << "DiamondTrap assign copy " << name << std::endl;
    return (*this);
}

DiamondTrap::~DiamondTrap (void) {
    std::cout << "Diamonds are supposed to be unbreakable!"
        << std::endl;
}

void    DiamondTrap::whoAmI (void) {
    std::cout << "My base identity is " << FragTrap::getName()
        << " and my newest identity is " << name << "!"
        << std::endl;
}
