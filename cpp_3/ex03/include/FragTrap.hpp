/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:21:37 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/22 18:47:51 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
    public:
        FragTrap (void);
        FragTrap (std::string nameC);
        FragTrap (const FragTrap &obj);
        FragTrap &operator=(const FragTrap &obj);
        ~FragTrap (void);

        void     highFiveGuys(void);
};

#endif
