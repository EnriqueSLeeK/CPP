/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:18:56 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/20 18:35:06 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <ostream>

ScavTrap::ScavTrap ( void ) {
    setName ("");
    setHp (100);
    setEnergy (50);
    setAttack (20);
    std::cout << "ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap (std::string nameC) {
    setName (nameC);
    setHp (100);
    setEnergy (50);
    setAttack (20);
    std::cout << "ScavTrap: " << getName() << " created!" << std::endl;
}

ScavTrap::ScavTrap (const ScavTrap &obj) : ClapTrap::ClapTrap() {
    setName (obj.getName());
    setHp (obj.getHp());
    setEnergy (obj.getEnergy());
    setAttack (obj.getAttack());
    std::cout << "ScavTrap cloned: " << getName() << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj) {
    setName (obj.getName());
    setHp (obj.getHp());
    setEnergy (obj.getEnergy());
    setAttack (obj.getAttack());
    std::cout << "ScavTrap cloned assign: " << getName() << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap ( void ) {
    std::cout << "Even now i'm beaten, i will be back!" << std::endl;
}

void    ScavTrap::guardGate ( void ) {
    std::cout << "Thou shall not pass!" << std::endl;
}

void    ScavTrap::attack ( const std::string &target ) {
    if (getEnergy() < 1) {
        std::cout << "Look i'm tired of this, please let me rest..." << std::endl;
        return ;
    }
    std::cout << "Scavtrap " << getName() << " attacks " << target << ", "
        << "causing " << getAttack() << " points of damage!"
        << std::endl;
    setEnergy(getEnergy() - 1);
}
