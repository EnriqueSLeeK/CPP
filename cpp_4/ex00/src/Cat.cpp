/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:08:16 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/18 16:27:15 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>
#include <ostream>

Cat::Cat (void) {
    type = "Cat";
    std::cout << "Cat constructed" << std::endl;
}

Cat::Cat (const Cat &animal) : Animal::Animal() {
    type = animal.type;
    std::cout << "Cat copied" << std::endl;
}

Cat &Cat::operator= (const Cat &animal) {
    type = animal.type;
    std::cout << "Cat copy assign" << std::endl;
    return (*this);
}

Cat::~Cat (void) {
    std::cout << "Cat destroyed" << std::endl;
}

void    Cat::makeSound (void) const {
    std::cout << "Meow" << std::endl;
}
