/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:47:10 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/22 19:55:16 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include <ostream>

int main() {
    DiamondTrap d("beep");

    DiamondTrap copy_d(d);

    DiamondTrap assign_d;
    assign_d = d;

    std::cout << std::endl;
    std::cout << "######### Who am i? ########################" << std::endl;
    d.whoAmI ();
    std::cout << "############################################" << std::endl;
    std::cout << std::endl;
    std::cout << "######### Attack with Scav #################" << std::endl;
    d.attack ( "dummy" );
    std::cout << "############################################" << std::endl;
    std::cout << std::endl;
    return (0);
}

