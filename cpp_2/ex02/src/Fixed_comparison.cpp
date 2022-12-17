/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_comparison.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:24:10 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/16 23:34:46 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

bool Fixed::operator>  (const Fixed &obj) const {
    return (number > obj.getRawBits() ? true : false);
}

bool Fixed::operator<  (const Fixed &obj) const {
    return (number < obj.getRawBits() ? true : false);
}

bool Fixed::operator>=  (const Fixed &obj) const {
    return (number > obj.getRawBits() || number == obj.getRawBits() ? true : false);
}

bool Fixed::operator<=  (const Fixed &obj) const {
    return (number > obj.getRawBits() || number == obj.getRawBits() ? true : false);
}

bool Fixed::operator==  (const Fixed &obj) const {
    return (number == obj.getRawBits() ? true : false);
}

bool Fixed::operator!=  (const Fixed &obj) const {
    return (number != obj.getRawBits() ? true : false);
}
