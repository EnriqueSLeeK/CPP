/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 00:08:34 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/21 00:15:23 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data (void) {}
Data::Data (const Data &data) {
    (void)data;
}
Data  &Data::operator= (const Data &data) {
    (void)data;
    return (*this);
}
Data::~Data (void) {}

uintptr_t   Data::serialize (Data *ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data        *Data::deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data *>(raw));
}
