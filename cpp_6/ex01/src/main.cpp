/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:47:10 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/21 00:18:40 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

#include <iostream>
#include <ostream>

int main() {

    uintptr_t addr;
    Data      data;
    Data      *data_ptr;
    addr = data.serialize(&data);
    std::cout << "address: " << addr << std::endl;
    data_ptr = data.deserialize(addr);
    std::cout << "address with the pointer: "
        << data_ptr->serialize(&data) << std::endl;

    return (0);
}

