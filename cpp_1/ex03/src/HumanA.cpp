/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:48:47 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/15 16:48:53 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>
#include <ostream>

HumanA::HumanA ( std::string nameH, Weapon &weaponH ) : weapon(weaponH) {
    name = nameH;
}

void    HumanA::setWeapon ( Weapon &weaponH ) {
    weapon = weaponH;
}

void    HumanA::attack ( void ) {
    std::cout << name 
        << " attacks with their weapon "
        << weapon.getType() << std::endl;
}
