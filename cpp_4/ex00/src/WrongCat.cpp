/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:12:43 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/18 17:26:18 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

#include <iostream>
#include <ostream>

WrongCat::WrongCat () {
    type = "WrongCat";
    std::cout << "WrongCat constructed" << std::endl;
}

WrongCat::WrongCat (const WrongCat &animal) : WrongAnimal::WrongAnimal() {
    type = animal.type;
    std::cout << "WrongCat copied" << std::endl;
}

WrongCat  &WrongCat::operator= (const WrongCat &animal) {
    type = animal.type;
    std::cout << "WrongCat copy assign" << std::endl;
    return (*this);
}
WrongCat::~WrongCat () {
    std::cout << "WrongCat destroyed" << std::endl;
}

void    WrongCat::makeSound (void) const {
    std::cout << "SCREEEEEEEECH!!!!!!!!" << std::endl;
}
