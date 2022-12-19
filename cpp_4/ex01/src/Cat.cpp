/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:08:16 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/18 19:35:36 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>
#include <ostream>

Cat::Cat (void) {
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat constructed" << std::endl;
}

Cat::Cat (const Cat &animal) : Animal::Animal() {
    type = animal.type;
    brain = new Brain(*animal.brain);
    std::cout << "Cat copied" << std::endl;
}

Cat::Cat (const Animal &animal) : Animal::Animal() {
    type = animal.getType();
    brain = new Brain(*(animal.getBrain()));
    std::cout << "Cat copied" << std::endl;
}

Cat &Cat::operator= (const Cat &animal) {
    type = animal.type;
    *brain = *(animal.brain);
    std::cout << "Cat copy assign" << std::endl;
    return (*this);
}

Cat &Cat::operator= (const Animal &animal) {
    type = animal.getType();
    *brain = *(animal.getBrain());
    std::cout << "Cat copy assign" << std::endl;
    return (*this);
}

Cat::~Cat (void) {
    delete brain;
    std::cout << "Cat destroyed" << std::endl;
}

void    Cat::makeSound (void) const {
    std::cout << "Meow" << std::endl;
}
