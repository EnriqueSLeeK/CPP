/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:50:59 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/15 16:51:03 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon {

    private:
        std::string type;

    public:
        Weapon ();
        Weapon ( std::string weapon_type );

        void        setType ( std::string weapon );
        std::string getType ( void );
};

#endif
