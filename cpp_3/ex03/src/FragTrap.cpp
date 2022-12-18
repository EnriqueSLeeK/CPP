/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:25:03 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/18 14:14:35 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>
#include <ostream>

FragTrap::FragTrap (void) {
    setName("");
    setHp(100);
    setEnergy(100);
    setAttack(30);
    std::cout << "FragTrap created" << std::endl;
}

FragTrap::FragTrap (std::string nameC) {
    setName(nameC);
    setHp(100);
    setEnergy(100);
    setAttack(30);
    std::cout << "FragTrap " << getName() << " created" << std::endl;
}

FragTrap::FragTrap (const FragTrap &obj) : ClapTrap::ClapTrap () {
    setName(obj.getName());
    setHp(obj.getHp());
    setEnergy(obj.getEnergy());
    setAttack(obj.getAttack());
    std::cout << "FragTrap clone " << getName() << " created" << std::endl;
}

FragTrap &FragTrap::operator= (const FragTrap &obj) {
    setName(obj.getName());
    setHp(obj.getHp());
    setEnergy(obj.getEnergy());
    setAttack(obj.getAttack());
    std::cout << "FragTrap copy assign " << getName() << " created" << std::endl;
    return (*this);
}

FragTrap::~FragTrap (void) {
    std::cout << "FragTrap out!" << std::endl;
}

void FragTrap::highFiveGuys (void) {
    std::cout << "High Five, yeah!" << std::endl;
}
