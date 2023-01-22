/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:31:48 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/22 19:34:26 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <ostream>

ClapTrap::ClapTrap () :
    name(""), hp(10), energy(10), attack_point(0) {
    std::cout << "Claptrap"<< " created!" << std::endl;
}

ClapTrap::ClapTrap (std::string nameC) :
    name(nameC), hp(10), energy(10), attack_point(0) {
    std::cout << "Claptrap: " << name << " created!" << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap &obj) {
    *this = obj;
    std::cout << "Cloned ClapTrap " << name << " !" << std::endl;
}

ClapTrap &ClapTrap::operator= (const ClapTrap &obj) {
    name = obj.name;
    hp = obj.hp;
    energy = obj.energy;
    attack_point = obj.attack_point;
    std::cout << "Copy assign ClapTrap " << name << " !" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap ( void ) { 
    std::cout << "FATAL ERROR: #####SELF DESTRUCTION##### note: not a error" << std::endl;
}

void    ClapTrap::attack ( const std::string &target ) {
    if (energy < 1) {
        std::cout << "Look i'm tired of this, please let me rest..." << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << name << " attacks " << target << ", "
        << "causing " << attack_point << " points of damage!"
        << std::endl;
    energy--;
}

void    ClapTrap::takeDamage ( unsigned int damage ) {
    if (hp <= 0) {
        std::cout << "I can't do this anymore!!!" << std::endl;
        return ;
    }
    hp -= damage;
    std::cout << "ClapTrap " << name << " took " << damage
        << " points of damage" << std::endl;
}

void    ClapTrap::beRepaired ( unsigned int recover ) {
    if (energy < 1) {
        std::cout << "Repair denied!" << std::endl;
        return ;
    }
    hp += recover;
    std::cout << "Claptrap " << name << " recovered " << recover
        << " points of health" << std::endl;
    energy--;
}
