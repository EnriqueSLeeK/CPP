/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 16:00:31 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/18 19:12:15 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat (void);
        Cat (const Cat &animal);
        Cat (const Animal &animal);
        Cat &operator= (const Cat &animal);
        Cat &operator= (const Animal &animal);
        ~Cat (void);

        virtual Brain   *getBrain (void) const;
        virtual void    makeSound (void) const;
};

#endif
