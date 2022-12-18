/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:47:10 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/18 14:32:39 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    FragTrap d("beep");
    FragTrap copy_d(d);

    FragTrap assign_d;
    assign_d = d;

    d.beRepaired ( 23 );
    d.takeDamage ( 23 );
    d.attack ( "dummy" );
    d.highFiveGuys ();
    return (0);
}

