/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 20:53:39 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/19 01:36:13 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

#include <iostream>
#include <ostream>

Character::Character (void) {}

Character::Character (std::string nameA) {
    name = nameA;
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character (const Character &obj) {
    *this = obj;
}

Character &Character::operator=(const Character &obj) {
    name = obj.getName();
    for (int i = 0; i < 4; i++)
        inventory[i] = obj.getMateria(i);
    return (*this);
}

Character::~Character (void) {
    std::cout << "Every living creature must return to the soil..." << std::endl;
}

void    Character::unequip (int idx) {
    if (idx < 0 || idx >= 4 || inventory[idx] == NULL) {
        std::cout << "There is nothing to unequip" << std::endl;
        return ;
    }
    inventory[idx]->setEquiped(0);
    inventory[idx] = NULL;
}

void    Character::equip (AMateria *m) {
    int idx = findEmptySlot();
    if (idx == -1) {
        std::cout << "Inventory is full, please drop some <materia>"
            << std::endl;
        return ;
    }
    m->setEquiped(1);
    inventory[idx] = m;
}

void    Character::use (int idx, ICharacter &target) {
    if (idx < 0 || idx >= 4 || inventory[idx] == NULL) {
        std::cout << "There is no materia here ~!" << std::endl;
        return ;
    }
    inventory[idx] -> use(target);
}

// Find
int Character::findEmptySlot (void) {
    for (int i = 0; i < 4; i++)
        if (inventory[i] == NULL)
            return (i);
    return (-1);
}

// Getters
AMateria    *Character::getMateria(int idx) const {
    if (idx < 0 || idx >= 4 || inventory[idx] == NULL)
        return (NULL);
    return (inventory[idx]);
}

std::string const   &Character::getName(void) const { return (name); }
