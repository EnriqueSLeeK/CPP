/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:02:05 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/19 01:34:41 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#include <iostream>
#include <ostream>

Animal::Animal (void) {}

Animal::Animal (const Animal &obj) { (void)obj; }

Animal::~Animal (void) {
    std::cout << "Animal destroyed" << std::endl;
}

Animal  &Animal::operator=(const Animal &obj) { (void)obj; return (*this); }

std::string Animal::getType (void) const { return (type); }

