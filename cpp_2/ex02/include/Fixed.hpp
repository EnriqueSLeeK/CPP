/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:47:20 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/16 23:35:38 by ensebast         ###   ########.fr       */
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

        bool operator>  (const Fixed &obj) const;
        bool operator<  (const Fixed &obj) const;
        bool operator>= (const Fixed &obj) const;
        bool operator<= (const Fixed &obj) const;
        bool operator== (const Fixed &obj) const;
        bool operator!= (const Fixed &obj) const;

        Fixed operator+ (const Fixed &obj) const;
        Fixed operator- (const Fixed &obj) const;
        Fixed operator* (const Fixed &obj) const;
        Fixed operator/ (const Fixed &obj) const;

        Fixed &operator++ ( void );
        Fixed operator++  ( int );
        Fixed &operator-- ( void );
        Fixed operator--  ( int );

        static Fixed  &min (Fixed &number_1, Fixed &number_2);
        static const Fixed  &min (const Fixed &number_1, const Fixed &number_2);
        static Fixed  &max (Fixed &number_1, Fixed &number_2);
        static const Fixed  &max (const Fixed &number_1, const Fixed &number_2);

        int     getRawBits ( void ) const;
        void    setRawBits ( int const raw );
        float   toFloat ( void ) const;
        int     toInt ( void ) const;
};

std::ostream&   operator<<(std::ostream &out, const Fixed &number);

#endif
