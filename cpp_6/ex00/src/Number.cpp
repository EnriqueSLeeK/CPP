/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Number.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:20:10 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/20 23:53:30 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Number.hpp"

#include <iostream>
#include <ostream>
#include <cctype>
#include <climits>
#include <cfloat>

Number::Number (void) {}

Number::Number (const std::string numberStr) :
    cNumber(0), iNumber(0), fNumber(0), dNumber(0),
    cStatus(-1), iStatus(-1), fStatus(-1), dStatus(-1) {
    if (!numberStr.empty()) {
        if (checkOnlyDigit(numberStr))
            convertI(numberStr);
        else
            convertC(numberStr);
    }
    else
        std::cerr << "Empty string" << std::endl;
}


Number::Number (const Number &numObj) { (void)numObj; }

Number  &Number::operator= (const Number &numObj) {
    (void)numObj;
    return (*this);
}

Number::~Number (void) {}


bool    Number::checkOnlyDigit(const std::string numberStr) {
    if (numberStr == "nan" || numberStr == "nanf"
            || numberStr == "+inf" || numberStr == "-inf"
            || numberStr == "+inff" || numberStr == "-inff")
        return (true);
    if (numberStr.length() == 1
            && (numberStr[0] == '-'
            || numberStr[0] == 'f'
            || numberStr[0] == '-'))
        return (false);
    return (numberStr.find_first_not_of("-.0123456789f") == std::string::npos);
}

void    Number::checkFAndSet(void) {
    if (static_cast<double>(-FLT_MAX) <= dNumber
            && static_cast<double>(FLT_MAX) >= dNumber)
        fStatus = 0;
    else
        fStatus = 3;
    checkIAndSet();
}

void    Number::checkIAndSet(void) {
    if (static_cast<float>(INT_MIN) <= fNumber
            && static_cast<float>(INT_MAX) >= fNumber)
        iStatus = 0;
    else
        iStatus = 3;
    checkCAndSet();
}

void    Number::checkCAndSet(void) {
    if (static_cast<int>(CHAR_MIN) <= iNumber
            && static_cast<int>(CHAR_MAX) >= iNumber) {
        if (cNumber >= ' ' && cNumber <= '~')
            cStatus = 0;
        else
            cStatus = 4;
    }
    else
        cStatus = 3;
}

void    Number::setStatus(int status, const char callerId) {
    if (status == -2 || status ==  2
            || status == 1) {
        fStatus = status;
        dStatus = status;
        iStatus = 3;
        cStatus = 3;
    }
    else if ( status > 0 ) {
        dStatus = status;
        fStatus = status;
        iStatus = status;
        cStatus = status;
    }
    else {
        switch (callerId) {
            case 'd':
                checkFAndSet();
                break ;
            case 'f':
                checkIAndSet();
                break ;
            case 'i':
                checkCAndSet();
                break ;
        }
    }
}
