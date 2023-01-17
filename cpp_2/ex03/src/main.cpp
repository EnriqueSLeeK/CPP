/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:47:10 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/17 15:44:00 by ensebast         ###   ########.fr       */
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

    Point in_point(10, 15); // Inside point => 1
    Point out_point(41, 15); // Outside point => 0
    Point vertex(20, 0); // Vertice => 0
    Point border(10, 0); // Colinear to AC aka triangle border => 0 
    Point border_diag(3, 3); // Colinear to AB aka triangle border => 0 

    std::cout << "In point: " << bsp(A, B, C, in_point) << std::endl;
    std::cout << "Out point: " << bsp(A, B, C, out_point) << std::endl;
    std::cout << "Vertex: " << bsp(A, B, C, vertex) << std::endl;
    std::cout << "Border: " << bsp(A, B, C, border) << std::endl;
    std::cout << "Border diagonal: " << bsp(A, B, C, border_diag) << std::endl;

    return 0;

}

