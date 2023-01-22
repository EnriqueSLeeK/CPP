/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:47:10 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/22 19:13:50 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    DiamondTrap d("beep");
    DiamondTrap copy_d(d);

    DiamondTrap assign_d;
    assign_d = d;

    d.beRepaired ( 23 );
    d.takeDamage ( 23 );
    d.attack ( "dummy" );
    d.guardGate ();
    d.highFiveGuys ();
    d.whoAmI ();
    return (0);
}

