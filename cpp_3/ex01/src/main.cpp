/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:47:10 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/18 14:33:44 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ScavTrap d("beep");
    ScavTrap copy_d(d);

    ScavTrap assign_d;
    assign_d = d;

    d.beRepaired ( 23 );
    d.takeDamage ( 23 );
    d.attack ( "dummy" );
    d.guardGate ();
    return (0);
}

