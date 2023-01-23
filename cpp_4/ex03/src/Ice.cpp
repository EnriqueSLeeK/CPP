/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 21:46:02 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/22 23:46:38 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

#include <iostream>
#include <ostream>

Ice::Ice () {
    std::cout << "Ice created" << std::endl;
    type = "ice";
    equiped = 0;
}

Ice::Ice (const Ice &materia) : AMateria::AMateria() {
    type = materia.getType();
}

Ice &Ice::operator= (const Ice &materia) {
    type = std::string(materia.getType());
    return (*this);
}

Ice::~Ice (void) {
    std::cout << "Ice destroyed!!" << std::endl;
}

void    Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt "
        << target.getName() << " *" << std::endl;
}

AMateria    *Ice::clone (void) const {
    return ( new Ice() );
}

void        Ice::setEquiped (int status) {equiped = status;}

int         Ice::getEquiped (void) const {return (equiped);}
