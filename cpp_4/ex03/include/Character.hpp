/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 20:48:30 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/19 01:36:47 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
    private:
        std::string name;
        AMateria *inventory[4];

        int     findEmptySlot(void);
        Character (void);

    public:
        Character (std::string nameA);
        Character (const Character &obj);
        Character &operator=(const Character &obj);
        ~Character (void);

        std::string const   &getName(void) const;
        AMateria            *getMateria(int idx) const;

        void    use(int idx, ICharacter &target);
        void    equip(AMateria *m);
        void    unequip(int idx);
};

#endif
