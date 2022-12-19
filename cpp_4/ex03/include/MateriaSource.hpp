/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:56:31 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/19 01:26:25 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    private:
        AMateria            *materia_memory[4];
        AMateria            *materia_bank[100];
        int                 memory_index;
        int                 bank_index;

    public:
        MateriaSource   (void);
        MateriaSource   (const MateriaSource &src);
        MateriaSource   &operator=(const MateriaSource &src);
        ~MateriaSource  (void);

        AMateria    *createMateria(std::string const &type);
        void        putIntoBank(AMateria *materia);
        void        learnMateria(AMateria *materia);
        void        forgetMateria(void);
        int         destroyMateria(void);
};

#endif
