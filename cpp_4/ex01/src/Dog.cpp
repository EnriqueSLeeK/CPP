/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:08:16 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/22 23:08:07 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream>
#include <ostream>

Dog::Dog (void) {
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog constructed" << std::endl;
}

Dog::Dog (const Dog &animal) : Animal::Animal() {
    type = animal.type;
    brain = new Brain(*animal.brain);
    std::cout << "Dog copied" << std::endl;
}

Dog::Dog (const Animal *animal) : Animal::Animal() {
    type = animal->getType();
    brain = new Brain(*animal->getBrain());
    std::cout << "Dog copied" << std::endl;
}

Dog &Dog::operator= (const Dog &animal) {
    type = animal.type;
    *brain = *(animal.brain);
    std::cout << "Dog copy assign" << std::endl;
    return (*this);
}

Dog::~Dog (void) {
    delete brain;
    std::cout << "Dog destroyed" << std::endl;
}

void    Dog::makeSound (void) const {
    std::cout << "Bark" << std::endl;
}

void    Dog::addIdea(const std::string &idea) const {
    brain->add_idea(idea);
}

void    Dog::forgetIdea(void) const{
    brain->delete_idea();
}

void    Dog::speakIdea(int index) const{
    brain->show_idea(index);
}

Brain   *Dog::getBrain(void) const {
    return (brain);
}
