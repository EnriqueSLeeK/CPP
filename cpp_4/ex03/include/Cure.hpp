/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 21:31:56 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/19 01:26:48 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{

    public:
        Cure (void);
        Cure (const Cure &materia);
        Cure &operator=(const Cure &materia);
        ~Cure (void);

        AMateria    *clone (void) const;
        void        use (ICharacter &target);
        void        setEquiped (int status);
        int         getEquiped (void) const;
};

#endif
