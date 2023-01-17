/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:42:42 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/17 15:39:19 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <ostream>

const int Fixed::fractionalBits = 8;

Fixed::Fixed () {
    number = 0;
}

Fixed::Fixed ( int numberF ) {
    number = numberF << fractionalBits;
}

Fixed::Fixed ( float numberF ) {
    number = (numberF * (double)(1 << fractionalBits));
}

Fixed::Fixed (const Fixed &obj) {
    number = obj.number;
}

Fixed& Fixed::operator=(const Fixed &obj) {
    this->number = obj.number;
    return (*this);
}

Fixed::~Fixed ( void ) {
}

int Fixed::getRawBits ( void ) const {
    return (number);
}

void    Fixed::setRawBits ( int const raw ) {
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
