/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:18:56 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/17 23:56:43 by ensebast         ###   ########.fr       */
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
