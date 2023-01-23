/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:08:16 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/22 23:07:50 by ensebast         ###   ########.fr       */
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

Cat::Cat (const Animal *animal) : Animal::Animal() {
    type = animal->getType();
    brain = new Brain(*animal->getBrain());
    std::cout << "Dog copied" << std::endl;
}

Cat &Cat::operator= (const Cat &animal) {
    type = animal.type;
    *brain = *(animal.brain);
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

void    Cat::addIdea(const std::string &idea) const {
    brain->add_idea(idea);
}

void    Cat::forgetIdea(void) const {
    brain->delete_idea();
}

void    Cat::speakIdea(int index) const {
    brain->show_idea(index);
}

Brain   *Cat::getBrain(void) const {
    return (brain);
}
