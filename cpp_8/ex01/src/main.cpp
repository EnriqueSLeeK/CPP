/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:47:10 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/21 22:38:15 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <iostream>
#include <ostream>

// Ugly test
void    test(Span &s, int n) {
    try {
        for (int i = 0; i < n; i++)
                s.addNumber(i);
    } catch (std::exception &e) {
        std::cout << "Insertion not possible" << std::endl;
    }

    try {
        std::cout << s.shortestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cout << "Shortest span not found" << std::endl;
    }

    try {
        std::cout << s.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cout << "Longest span not found" << std::endl;
    }
}

int main() {
    Span o(0);
    Span k(1);
    Span s(10000);

    test(s, 10000);
    test(k, 1);
    test(o, 1);
    return (0);
}

