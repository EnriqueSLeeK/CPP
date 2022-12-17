/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:48:47 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/15 16:48:53 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <ostream>

std::string create_string( const char *name ) {
    std::string converted = name;
    return (converted);
}

int main() {
    
    int n = 5;
    Zombie  *zombieArmy = zombieHorde(5, "Joy");
    for (int i = 0; i < n; i++)
        zombieArmy[i].announce();
    delete[] zombieArmy;
}

