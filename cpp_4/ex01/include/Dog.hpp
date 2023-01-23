/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 15:58:29 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/22 23:07:26 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
    private:
        Brain *brain;

    public:
        Dog (void);
        Dog (const Dog &animal);
        Dog (const Animal *animal);
        Dog &operator=(const Dog &animal);
        Dog &operator=(const Animal &animal);
        ~Dog (void);

        virtual void    makeSound(void) const;

        void    addIdea(const std::string &idea) const;
        void    forgetIdea(void) const;
        void    speakIdea(int index) const;
        Brain   *getBrain(void) const;
};

#endif
