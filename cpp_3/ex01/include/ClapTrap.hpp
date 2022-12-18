/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:23:16 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/17 23:39:31 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap {
    private:
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

        void    setName (std::string nameC);
        void    setHp (int hp_point);
        void    setEnergy (int fuel);
        void    setAttack (int attack_power);

        std::string    getName ( void ) const;
        int    getHp ( void ) const;
        int    getEnergy ( void ) const;
        int    getAttack ( void ) const;
};

#endif
