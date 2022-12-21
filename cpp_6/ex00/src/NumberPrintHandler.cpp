/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NumberPrintHandler.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 02:10:43 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/20 23:06:49 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Number.hpp"

#include <iostream>
#include <iomanip>
#include <ostream>

void    Number::handleFloatPrint(std::ostream &out,
        float number, int status) {
    if (status == 1)
        out << "nanf";
    else if (status == 2 || status == -2)
        out << (status == 2 ? "+" : "-") << "inff";
    else if (status == 3)
        out << "impossible";
    else
        out << std::fixed << std::showpoint
            << std::setprecision(1) << number << "f";
    out << std::endl;
}

void    Number::handleDoublePrint(std::ostream &out,
            double number, int status) {
    if (status == 1)
        out << "nan";
    else if (status == 2 || status == -2)
        out << (status == 2 ? "+" : "-") << "inf";
    else if (status == 3)
        out << "impossible";
    else
        out << std::fixed << std::showpoint
            << std::setprecision(1) << number;
}

void    Number::handleIntPrint(std::ostream &out,
            int number, int status) {
    if (status == 3)
        out << "impossible";
    else
        out << number;
    out << std::endl;
}

void    Number::handleCharPrint(std::ostream &out,
            char character, int status) {
    if (status == 3)
        out << "impossible";
    else if (status == 4)
        out << "Non displayable";
    else
        out << "'" << character << "'";
    out << std::endl;
}

std::ostream    &operator<<(std::ostream &out, const Number &n) {
    out << "char: ";
    Number::handleCharPrint(out, n.cNumber, n.cStatus);
    out << "int: ";
    Number::handleIntPrint(out, n.iNumber, n.iStatus);
    out << "float: ";
    Number::handleFloatPrint(out, n.fNumber, n.fStatus);
    out << "double: ";
    Number::handleDoublePrint(out, n.dNumber, n.dStatus);
    return (out);
}
