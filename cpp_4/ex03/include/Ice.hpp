/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 21:31:56 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/19 01:26:55 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{

    public:
        Ice (void);
        Ice (const Ice &materia);
        Ice &operator=(const Ice &materia);
        ~Ice (void);

        AMateria    *clone (void) const;
        void        use (ICharacter &target);
        void        setEquiped (int status);
        int         getEquiped (void) const;
};

#endif
