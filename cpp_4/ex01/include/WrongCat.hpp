/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:10:00 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/18 17:28:32 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat (void);
        WrongCat (const WrongCat &animal);
        WrongCat &operator=(const WrongCat &animal);
        virtual ~WrongCat (void);

        virtual void    makeSound (void) const;
};

#endif
