/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:35:41 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/17 15:36:45 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point () : x(Fixed(0)), y(Fixed(0)) { }

Point::Point (float x_c, float y_c) : x(Fixed(x_c)), y(Fixed(y_c)) { }

Point::Point (const Point &point) : x(point.x), y(point.y) { }

Point::~Point ( void ) {}

Point &Point::operator= (const Point &point) {
    (void)point;
    return (*this);
}

Fixed Point::getY () const { return (y); }
Fixed Point::getX () const { return (x); }

Fixed area(Point const pOne, Point const pTwo, Point const pThree) {
    Fixed res = ((pOne.getX() * (pTwo.getY() - pThree.getY()))
                + (pTwo.getX() * (pThree.getY() - pOne.getY()))
                + (pThree.getX() * (pOne.getY() - pTwo.getY())));
    if (res.toFloat() < 0)
        res = res * Fixed(-1);
    return (res);
}

// Testing if the point is inside the triangle
bool bsp( Point const a, Point const b, Point const c, Point const point) {
    Fixed triangleArea = area(a, b, c);
    Fixed partA = area(point, b, c) / triangleArea;
    Fixed partB = area(a, point, c) / triangleArea;
    Fixed partC = area(a, b, point) / triangleArea;

    Fixed zero = Fixed(0);
    Fixed one = Fixed(1);
    return (zero < partA && partA < one &&
            zero < partB && partB < one &&
            zero < partC && partC < one &&
            one == (partA + partB + partC));
}
