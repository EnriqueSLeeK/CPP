/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:42:20 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/22 23:07:06 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "Brain.hpp"
#include <string>

class Animal {
    protected:
        std::string type;

    public:
        Animal (void);
        Animal (const Animal &animal);
        Animal &operator=(const Animal &animal);
        virtual ~Animal (void);

        std::string getType (void) const;
        virtual void    makeSound (void) const;

        virtual void    addIdea(const std::string &idea) const;
        virtual void    forgetIdea(void) const;
        virtual void    speakIdea(int index) const;
        virtual Brain   *getBrain(void) const;
};

#endif
