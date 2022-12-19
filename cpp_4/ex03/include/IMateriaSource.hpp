/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:51:38 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/18 22:59:48 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class AMateria;

class IMateriaSource {
    public:
        virtual             ~IMateriaSource () {}
        virtual void        learnMateria(AMateria *) = 0;
        virtual AMateria    *createMateria (std::string const &type) = 0;
};

#endif
