/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:02:05 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/22 23:20:16 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#include <iostream>
#include <ostream>

Animal::Animal () {
    type = "";
    std::cout << "Animal constructed" << std::endl;
}

Animal::Animal (const Animal &animal) {
    type = animal.type;
    std::cout << "Animal copied" << std::endl;
}

Animal  &Animal::operator= (const Animal &animal) {
    type = animal.type;
    return (*this);
}
Animal::~Animal () {
    std::cout << "Animal destroyed" << std::endl;
}

std::string Animal::getType (void) const { return (type); }
