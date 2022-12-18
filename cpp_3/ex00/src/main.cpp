/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:47:10 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/18 14:38:21 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap cP("Beeb");
    ClapTrap cD(cP);
    ClapTrap assign_C;
    assign_C = cP;
    for (int i = 0; i < 13; i++)
        cP.attack( "Pew" );
    cD.beRepaired( 40 );
    cD.takeDamage( 300 );
    cD.takeDamage( 40 );
    return (0);
}

