/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 00:24:50 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/21 01:07:31 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

#include <iostream>
#include <ostream>

Base::Base (void) {}
Base::Base (const Base &base) { (void)base; }
Base &Base::operator=(const Base &base) {
    (void)base;
    return (*this);
}
Base::~Base (void) {}
