/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:07:20 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/18 17:08:16 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <string>

class WrongAnimal {
    protected:
        std::string type;
    public:
        WrongAnimal (void);
        WrongAnimal (const WrongAnimal &animal);
        WrongAnimal &operator=(const WrongAnimal &animal);
        virtual ~WrongAnimal (void);

        std::string getType (void) const;
        virtual void    makeSound (void) const;
};

#endif
