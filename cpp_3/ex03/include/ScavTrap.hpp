/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:02:23 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/22 18:47:58 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public virtual ClapTrap {

    public:
        ScavTrap ( void );
        ScavTrap (std::string nameC);
        ScavTrap (const ScavTrap &obj);
        ScavTrap &operator= (const ScavTrap &obj);
        ~ScavTrap ( void );
        void guardGate(void);
        void attack(const std::string &target);
};

#endif
