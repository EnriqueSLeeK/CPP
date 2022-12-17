/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:50:58 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/15 16:51:03 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {
    private:
        std::string name;
    public:
        Zombie ( void );
        Zombie ( std::string nameZ );
        ~Zombie ( void );
        void    setName( std::string nameZ );
        void    announce( void );
};

Zombie  *zombieHorde( int n, std::string name );

#endif
