/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 21:46:02 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/22 23:46:47 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

#include <iostream>
#include <ostream>

Cure::Cure () {
    std::cout << "Cure created" << std::endl;
    type = "cure";
    equiped = 0;
}

Cure::Cure (const Cure &materia) : AMateria::AMateria() {
    type = materia.getType();
}

Cure &Cure::operator= (const Cure &materia) {
    type = std::string(materia.getType());
    return (*this);
}

Cure::~Cure (void) {
    std::cout << "Cure Destroyed!!" << std::endl;
}

void    Cure::use(ICharacter &target) {
    std::cout << "* heals "  << target.getName() << "'s wounds"
        << " *" << std::endl;
}

AMateria    *Cure::clone (void) const { return (new Cure()); }

void        Cure::setEquiped (int status) {equiped = status;}
int         Cure::getEquiped (void) const {return (equiped);}
