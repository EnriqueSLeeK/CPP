/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:42:06 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/21 16:55:28 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <ostream>

template< typename T >
void    print_a (const T &elem, int index) {
    std::cout << "i: " << index << "| " 
        << "print_a: " << elem << std::endl;
}

template< typename T >
void    print_b (const T &elem, int index) {
    std::cout << "i: " << index << "| " 
        << "print_b: " << elem << std::endl;
}

template< typename T >
void    iter(const T *addr, int length, void (*func_ptr)(const T &, int)) {
    for (int i = 0; i < length; i++) {
        func_ptr(addr[i], i);
    }
}

#endif
