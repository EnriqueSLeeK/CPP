/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:42:20 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/18 19:21:28 by ensebast         ###   ########.fr       */
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
        Animal (const Animal &animal);
        Animal &operator=(const Animal &animal);
        virtual ~Animal (void);

        std::string getType (void) const;
        Brain       *getBrain (void) const;
        virtual void    makeSound (void) const;
};

#endif
