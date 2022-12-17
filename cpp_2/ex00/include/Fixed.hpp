/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:47:20 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/15 21:37:09 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
    private:
        int                 number;
        static const int    fractional_bits;
    public:
        Fixed ();
        Fixed (const Fixed &obj);
        Fixed& operator=(const Fixed &obj);
        ~Fixed ();
        int     getRawBits ( void ) const;
        void    setRawBits ( int const raw );
};

#endif
