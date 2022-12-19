/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 23:17:04 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/19 00:25:05 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

#include <iostream>
#include <ostream>

AMateria::AMateria (void) {}

AMateria::AMateria (std::string const &typeM) { type = typeM; }

AMateria::AMateria (const AMateria &obj) { type = obj.getType(); }

AMateria::~AMateria (void){ return; }

AMateria &AMateria::operator= (const AMateria &obj) {
    type = obj.getType();
    return (*this);
}

std::string const   &AMateria::getType(void) const { return (type); }

void                AMateria::use (ICharacter &target) {
    std::cout << "Used " << type << " on " << target.getName()
        << std::endl;
}
