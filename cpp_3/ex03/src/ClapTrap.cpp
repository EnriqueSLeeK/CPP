/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:31:48 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/18 12:50:57 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <ostream>

ClapTrap::ClapTrap () {
    name = "GenericTrap";
    hp = 10;
    energy = 10;
    attack_point = 0;
    std::cout << "Claptrap"<< " created!" << std::endl;
}

ClapTrap::ClapTrap (std::string nameC) {
    name = nameC;
    hp = 10;
    energy = 10;
    attack_point = 0;
    std::cout << "Claptrap: " << name << " created!" << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap &obj) {
    name = obj.name;
    hp = obj.hp;
    energy = obj.energy;
    attack_point = obj.attack_point;
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
    if (hp <= 0 || energy <= 0) {
        std::cout << "I can't do this anymore!!!" << std::endl;
        return ;
    }
    hp -= damage;
    std::cout << "ClapTrap " << name << " took " << damage
        << " points of damage" << std::endl;
}

void    ClapTrap::beRepaired ( unsigned int recover ) {
    hp += recover;
    std::cout << "Claptrap " << name << " recovered " << recover
        << " points of health" << std::endl;
}

void    ClapTrap::setName (std::string nameC) { name = nameC; };

void    ClapTrap::setHp (int hp_point) { hp = hp_point; }

void    ClapTrap::setEnergy (int fuel) { energy = fuel; }

void    ClapTrap::setAttack (int attack_power) { attack_point = attack_power; }

std::string    ClapTrap::getName ( void ) const { return (name); }

int    ClapTrap::getHp ( void ) const { return (hp); }

int    ClapTrap::getEnergy ( void ) const { return (energy); }

int    ClapTrap::getAttack ( void ) const { return (attack_point); }
