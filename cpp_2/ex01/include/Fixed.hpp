/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:47:20 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/16 16:42:45 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    private:
        int                 number;
        static const int    fractionalBits;

    public:
        Fixed ();
        Fixed ( int numberF );
        Fixed ( float numberF );
        Fixed (const Fixed &obj);
        ~Fixed ();

        Fixed& operator=(const Fixed &obj);

        int     getRawBits ( void ) const;
        void    setRawBits ( int const raw );
        float   toFloat ( void ) const;
        int     toInt ( void ) const;
};

std::ostream&   operator<<(std::ostream &out, const Fixed &number);

#endif
