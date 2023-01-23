/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:00:31 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/23 18:40:04 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
    private:
        Brain *brain;

    public:
        Cat (void);
        Cat (const Cat &animal);
        Cat (const Animal *animal);
        Cat &operator= (const Cat &animal);
        Cat &operator= (const Animal &animal);
        ~Cat (void);

        void    makeSound (void) const;

        void    addIdea(const std::string &idea) const;
        void    speakIdea(int index) const;
        void    forgetIdea(void) const;
        Brain   *getBrain(void) const;
};

#endif
