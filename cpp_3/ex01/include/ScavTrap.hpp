/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:02:23 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/17 23:38:16 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap {

    private:
        int mode;

    public:
        ScavTrap ( void );
        ScavTrap (std::string nameC);
        ScavTrap (const ScavTrap &obj);
        ScavTrap &operator= (const ScavTrap &obj);
        ~ScavTrap ( void );
        void guardGate(void);
};

#endif
