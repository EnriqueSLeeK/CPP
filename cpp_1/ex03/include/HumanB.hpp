/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:50:59 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/15 16:51:03 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H

#include "Weapon.hpp"
#include <string>

class HumanB {

    private:
        std::string name;
        Weapon      *weapon;

    public:
        HumanB ( std::string nameH );
        void setWeapon ( Weapon &weaponH );
        void attack ( void );
};

#endif
