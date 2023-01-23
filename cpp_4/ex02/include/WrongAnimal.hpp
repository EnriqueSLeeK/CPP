/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:07:20 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/23 18:35:56 by ensebast         ###   ########.fr       */
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
        void    makeSound (void) const;
};

#endif
