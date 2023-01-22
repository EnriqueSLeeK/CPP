/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:23:16 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/22 18:54:21 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap {
    protected:
        std::string name;
        int         hp;
        int         energy;
        int         attack_point;
    public:
        ClapTrap    ( void );
        ClapTrap (std::string nameC);
        ClapTrap (const ClapTrap &obj);
        ClapTrap &operator=(const ClapTrap &obj);
        ~ClapTrap ( void );

        void    attack ( const std::string &target );
        void    takeDamage ( unsigned int damage );
        void    beRepaired ( unsigned int recover );
};

#endif
