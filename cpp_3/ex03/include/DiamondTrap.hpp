/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:41:31 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/22 19:30:52 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_HPP
# define DIAMOND_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
    private:
        std::string name;

    public:
        DiamondTrap (void);
        DiamondTrap (std::string nameC);
        DiamondTrap (const DiamondTrap &obj);
        DiamondTrap &operator= (const DiamondTrap &obj);
        ~DiamondTrap (void);

        void    attack(const std::string &target);
        void    whoAmI(void);
};

#endif
