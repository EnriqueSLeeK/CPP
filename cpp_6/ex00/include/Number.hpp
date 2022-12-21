/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Number.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:20:13 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/20 21:26:57 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBER_HPP
# define NUMBER_HPP

#include <string>
#include <ostream>

class Number {
    public:
        char    cNumber;
        int     iNumber;
        float   fNumber;
        double  dNumber;

        int     cStatus;
        int     iStatus;
        int     fStatus;
        int     dStatus;

        Number (void);
        Number (const std::string numberStr);
        Number (const Number &numObj);
        Number &operator=(const Number &numObj);
        ~Number (void);

        bool    checkOnlyDigit(const std::string numberStr);
        static void    handleFloatPrint(std::ostream &out,
                    float number, int status);
        static void    handleDoublePrint(std::ostream &out,
                    double number, int status);
        static void    handleIntPrint(std::ostream &out,
                    int number, int status);
        static void    handleCharPrint(std::ostream &out,
                    char character, int status);

        void    setStatus(int status, const char callerId);
        void    setParseStatus(int &statusParse,
                    const std::string numberStr);

        void     checkFAndSet (void);
        void     checkIAndSet (void);
        void     checkCAndSet (void);

        void    convertI(const std::string numberStr);
        void    convertF(const std::string numberStr);
        void    convertD(const std::string numberStr);
        void    convertC(const std::string numberStr);
};

std::ostream    &operator<<(std::ostream &out, const Number &n);

#endif
