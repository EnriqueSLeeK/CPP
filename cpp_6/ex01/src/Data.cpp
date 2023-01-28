/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 00:08:34 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/26 18:26:09 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data (void) {
    something = "Pew";
}
Data::Data (const Data &data) {
    *this = data;
}
Data  &Data::operator= (const Data &data) {
    something = data.something;
    return (*this);
}
Data::~Data (void) {}

uintptr_t   Data::serialize (Data *ptr) {
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data        *Data::deserialize(uintptr_t raw) {
    return (reinterpret_cast<Data *>(raw));
}
