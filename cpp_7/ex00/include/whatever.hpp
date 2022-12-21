/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */ /*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 01:45:37 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/21 03:24:24 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP



#include <typeinfo>
#include <string>
#include <iostream>
#include <ostream>

template< typename T >
T const &   max(T const &a, T const &b) {
    return ( a > b ? a : b);
}

template< typename T >
T const &   min(T const &a, T const &b) {
    return ( a < b ? a : b);
}

template< typename T >
void   swap(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template< typename T >
void    test(T a, T b) {
    std::cout << "a = " << a << ", b = " << b << std::endl;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::cout << std::endl;
}

#endif
