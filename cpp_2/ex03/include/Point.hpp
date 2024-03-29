/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:57:04 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/17 15:34:05 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
    private:
        Fixed const   x;
        Fixed const   y;
    public:
        Point ( void );
        Point (float x, float y);
        Point (const Point &point);
        ~Point ( void );
        Point &operator=(const Point &point);

        Fixed getY( void ) const;
        Fixed getX( void ) const;
};

    bool bsp( Point const a, Point const b, Point const c, Point const point );

    Fixed area(Point const pOne, Point const pTwo, Point const pThree);

#endif
