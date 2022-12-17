/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:35:41 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/17 15:26:42 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point () {
    x = Fixed(0);
    y = Fixed(0);
}

Point::Point (float x_c, float y_c) {
    x = Fixed(x_c);
    y = Fixed(y_c);
}

Point::Point (const Point &point) {
    x = point.x;
    y = point.y;
}

Point::~Point ( void ) {}

Point &Point::operator= (const Point &point) {
    x = point.x;
    y = point.y;
    return (*this);
}

Fixed Point::getY () const { return (y); }
Fixed Point::getX () const { return (x); }

Fixed Point::area(Point const pOne, Point const pTwo, Point const pThree) const {
    Fixed res = ((pOne.getX() * (pTwo.getY() - pThree.getY()))
                + (pTwo.getX() * (pThree.getY() - pOne.getY()))
                + (pThree.getX() * (pOne.getY() - pTwo.getY())));
    if (res.toFloat() < 0)
        res = res * Fixed(-1);
    return (res);
}

// Testing if the point is inside the triangle
bool Point::bsp( Point const a, Point const b, Point const c, Point const point) {
    Fixed triangleArea = area(a, b, c);
    Fixed partA = area(point, b, c);
    Fixed partB = area(a, point, c);
    Fixed partC = area(a, b, point);
    std::cout << triangleArea << std::endl;
    std::cout << partA + partB + partC << std::endl;
    return (triangleArea == (partA + partB + partC));
}
