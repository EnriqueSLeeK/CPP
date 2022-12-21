/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NumberConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 02:11:57 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/20 23:37:11 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Number.hpp"

#include <iostream>
#include <sstream>

void  Number::convertI(const std::string numberStr) {

    int tmp;
    int statusParse = 0;
    std::istringstream ss(numberStr);
    if (numberStr == "nan" || numberStr == "nanf"
            || numberStr == "+inf" || numberStr == "-inf"
            || numberStr == "+inff" || numberStr == "-inff")
        return (convertD(numberStr));
    if (!(ss >> tmp))
        statusParse = 3;
    if (ss.tellg() == -1 && !ss.fail()) {
        iNumber = tmp;
        cNumber = static_cast<char>(iNumber);
        fNumber = static_cast<float>(iNumber);
        dNumber = static_cast<double>(iNumber);
        setStatus(statusParse, 'i');
    }
    else
        convertD(numberStr);
}

void  Number::convertD(const std::string numberStr) {

    double tmp = 0;
    int statusParse = 0;
    std::istringstream ss(numberStr);
    if (numberStr == "nanf"
            || numberStr == "+inff" || numberStr == "-inff")
        return (convertF(numberStr));
    setParseStatus(statusParse, numberStr);
    if (statusParse == 0 && !(ss >> tmp))
        statusParse = 3;
    if (ss.tellg() == -1) {
        dNumber = tmp;
        fNumber = static_cast<float>(dNumber);
        iNumber = static_cast<int>(dNumber);
        cNumber = static_cast<char>(dNumber);
        setStatus(statusParse, 'd');
    }
    else
        convertF(numberStr);
}

void  Number::convertF(const std::string numberStr) {

    float tmp = 0;
    int statusParse = 0;
    std::istringstream ss(numberStr);
    setParseStatus(statusParse, numberStr);
    if (statusParse == 0 && !(ss >> tmp))
        statusParse = 3;
    if (statusParse
            || (ss.tellg() == static_cast<long int>((numberStr.length() - 1))
            && numberStr[ss.tellg()] == 'f')) {
        fNumber = tmp;
        iNumber = static_cast<int>(fNumber);
        cNumber = static_cast<char>(fNumber);
        dNumber = static_cast<double>(fNumber);
        setStatus(statusParse, 'f');
    }
    else
        std::cout << "Error!" << std::endl;
}

void  Number::convertC(const std::string numberStr) {

    if (numberStr.length() == 1) {
        cNumber = numberStr[0];
        iNumber = static_cast<int>(cNumber);
        fNumber = static_cast<float>(cNumber);
        dNumber = static_cast<double>(cNumber);
    }
    else {
        std::cerr << "Error! Bad formatted string given"
            << std::endl;
        setStatus(3, 'c');
    }
}

void  Number::setParseStatus(int &statusParse,
        const std::string numberStr) {
    if (numberStr == "nan" || numberStr == "nanf")
        statusParse = 1;
    else if (numberStr == "+inf" || numberStr == "-inf"
            || numberStr == "+inff" || numberStr == "-inff")
        statusParse = (numberStr[0] == '+' ? 1 : -1) * 2;
}
