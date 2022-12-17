/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:42:42 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/16 17:01:50 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <ostream>

const int Fixed::fractional_bits = 8;

Fixed::Fixed () {
    std::cout << "Default constructor has been called" << std::endl;
    number = 0;
}

Fixed::Fixed (const Fixed &obj) {
    std::cout << "Copy constructor has been called" << std::endl;
    number = obj.number;
}

Fixed& Fixed::operator=(const Fixed &obj) {
    std::cout << "Copy assignment has been called" << std::endl;
    this->number = obj.number;
    return (*this);
}

Fixed::~Fixed ( void ) {
    std::cout << "Destructor has been called" << std::endl;
}

int Fixed::getRawBits ( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (number);
}

void    Fixed::setRawBits ( int const raw ) {
    std::cout << "setRawBits member function called" << std::endl;
    number = raw;
}
