/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:42:20 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/19 01:31:37 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "Brain.hpp"
#include <string>

class Animal {
    protected:
        Brain       *brain;
        std::string type;
    public:
        Animal (void);
        Animal (const Animal &obj);
        Animal &operator=(const Animal &animal);
        virtual ~Animal (void) = 0;
        virtual void    makeSound (void) const = 0;
        virtual Brain   *getBrain (void) const = 0;
        std::string     getType (void) const;
};

#endif
