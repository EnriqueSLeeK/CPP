/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:47:10 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/17 18:01:28 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>
#include <ostream>

int main() {

    Point A(0, 0);
    Point B(10, 30);
    Point C(20, 0);
    Point P(41, 15);
    Point K(10, 15);

    std::cout << P.bsp(A, B, C, P) << std::endl;
    std::cout << P.bsp(A, B, C, K) << std::endl;

    return 0;

}

