/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:47:10 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/18 14:30:50 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    DiamondTrap d("beep");
    DiamondTrap copy_d(d);

    DiamondTrap assign_d;
    assign_d = d;

    d.FragTrap::beRepaired ( 23 );
    d.FragTrap::takeDamage ( 23 );
    d.FragTrap::attack ( "dummy" );
    d.guardGate ();
    d.highFiveGuys ();
    d.whoAmI ();
    return (0);
}

