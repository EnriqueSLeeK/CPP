/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:42:42 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/16 17:01:07 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>
#include <ostream>

const int Fixed::fractionalBits = 8;

Fixed::Fixed () {
    std::cout << "Default constructor has been called" << std::endl;
    number = 0;
}

Fixed::Fixed ( int numberF ) {
    std::cout << "Int constructor has been called" << std::endl;
    number = numberF << fractionalBits;
}

Fixed::Fixed ( float numberF ) {
    std::cout << "Float constructor has been called" << std::endl;
    number = (numberF * pow(2, 8));
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

float   Fixed::toFloat ( void ) const {
    float   aux = number >> fractionalBits;
    int     tmp = number;
    for (int i = -8; i < 0; i++) {
        aux += (1 & tmp) * pow(2, i);
        tmp >>= 1;
    }
    return (aux);
}

int     Fixed::toInt ( void ) const {
    return (number >> fractionalBits);
}

std::ostream&   operator<<(std::ostream &out, const Fixed &number) {
    out << number.toFloat();
    return (out);
}
