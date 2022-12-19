/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:11:15 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/18 17:23:54 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#include <iostream>
#include <ostream>

WrongAnimal::WrongAnimal () {
    type = "";
    std::cout << "WrongAnimal constructed" << std::endl;
}

WrongAnimal::WrongAnimal (const WrongAnimal &animal) {
    type = animal.type;
    std::cout << "WrongAnimal copied" << std::endl;
}

WrongAnimal  &WrongAnimal::operator= (const WrongAnimal &animal) {
    type = animal.type;
    return (*this);
}
WrongAnimal::~WrongAnimal () {
    std::cout << "WrongAnimal destroyed" << std::endl;
}

std::string WrongAnimal::getType (void) const { return (type); }

void    WrongAnimal::makeSound (void) const {
    std::cout << "?????????????" << std::endl;
}
