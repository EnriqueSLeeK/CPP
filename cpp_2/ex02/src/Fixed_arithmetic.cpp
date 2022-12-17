/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_arithmetic.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:37:25 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/16 23:34:27 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed Fixed::operator+ (const Fixed &obj) const {
    Fixed new_number;
    new_number.setRawBits(number + obj.getRawBits());
    return (new_number);
}
Fixed Fixed::operator- (const Fixed &obj) const {
    Fixed new_number;
    new_number.setRawBits(number - obj.getRawBits());
    return (new_number);
}
Fixed Fixed::operator* (const Fixed &obj) const {
    Fixed new_number;
    new_number.setRawBits((number * obj.getRawBits()) >> fractionalBits);
    return (new_number);
}
Fixed Fixed::operator/ (const Fixed &obj) const {
    Fixed new_number;
    new_number.setRawBits((number << fractionalBits) / obj.getRawBits());
    return (new_number);
}

Fixed &Fixed::operator++ ( void ) {
    ++number;
    return (*this);
}

Fixed Fixed::operator++ ( int ) {
    Fixed   tmp = *this;
    ++number;
    return (tmp);
}

Fixed &Fixed::operator-- ( void ) {
    --number;
    return (*this);
}

Fixed Fixed::operator-- ( int ) {
    Fixed   tmp = *this;
    --number;
    return (tmp);
}

Fixed  &Fixed::min (Fixed &number_1, Fixed &number_2) {
    return (number_1.getRawBits() < number_2.getRawBits() ? number_1 : number_2);
}

const Fixed  &Fixed::min (const Fixed &number_1, const Fixed &number_2) {
    return (number_1.getRawBits() < number_2.getRawBits() ? number_1 : number_2);
}

Fixed  &Fixed::max (Fixed &number_1, Fixed &number_2) {
    return (number_1.getRawBits() > number_2.getRawBits() ? number_1 : number_2);
}

const Fixed  &Fixed::max (const Fixed &number_1, const Fixed &number_2) {
    return (number_1.getRawBits() > number_2.getRawBits() ? number_1 : number_2);
}
