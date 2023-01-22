/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:25:03 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/22 19:12:46 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include <iostream>
#include <ostream>

FragTrap::FragTrap (void) {
    name = "";
    hp = 100;
    energy = 100;
    attack_point = 30;
    std::cout << "FragTrap created" << std::endl;
}

FragTrap::FragTrap (std::string nameC) {
    name = nameC;
    hp = 100;
    energy = 100;
    attack_point = 30;
    std::cout << "FragTrap " << name << " created" << std::endl;
}

FragTrap::FragTrap (const FragTrap &obj) : ClapTrap(obj) {
    *this = obj;
    std::cout << "FragTrap clone " << name << " created" << std::endl;
}

FragTrap &FragTrap::operator= (const FragTrap &obj) {
    name = obj.name;
    hp = obj.hp;
    energy = obj.energy;
    attack_point = obj.attack_point;
    std::cout << "FragTrap copy assign " << name << " created" << std::endl;
    return (*this);
}

FragTrap::~FragTrap (void) {
    std::cout << "FragTrap out!" << std::endl;
}

void FragTrap::highFiveGuys (void) {
    std::cout << "High Five, yeah!" << std::endl;
}
