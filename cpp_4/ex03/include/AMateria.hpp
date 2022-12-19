/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 19:45:14 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/19 01:29:53 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
    protected:
        std::string type;
        int         equiped;

    public:
        AMateria (void);
        AMateria (std::string const &typeM);
        AMateria (const AMateria &obj);
        AMateria &operator=(const AMateria &obj);
        virtual ~AMateria (void);

        std::string const &getType(void) const;

        virtual AMateria* clone(void) const = 0;
        virtual void use (ICharacter &target);
        virtual void setEquiped (int status) = 0;
        virtual int  getEquiped (void) const = 0;
};

#endif
