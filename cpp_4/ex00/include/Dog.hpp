/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 15:58:29 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/18 16:47:38 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog (void);
        Dog (const Dog &animal);
        Dog &operator=(const Dog &animal);
        ~Dog (void);

        virtual void    makeSound(void) const;
};

#endif
