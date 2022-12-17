/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:42:42 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/17 18:00:18 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
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
    number = (numberF * (double)(1 << fractionalBits));
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
    return ((double)(number) / (double)(1 << fractionalBits));
}

int     Fixed::toInt ( void ) const {
    return (number >> fractionalBits);
}

std::ostream&   operator<<(std::ostream &out, const Fixed &fixed_point) {
    out << fixed_point.toFloat();
    return (out);
}
