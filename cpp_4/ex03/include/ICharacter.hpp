/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 19:49:40 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/18 22:35:03 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include "AMateria.hpp"
#include <string>

class AMateria;

class  ICharacter {
    public:
      virtual ~ICharacter() {}
      virtual std::string const &getName() const = 0;
      virtual void equip(AMateria *m) = 0;
      virtual void unequip(int idx) = 0;
      virtual void use(int idx, ICharacter &target) = 0;
};

#endif
