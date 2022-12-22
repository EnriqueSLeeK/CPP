/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:09:32 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/21 22:31:43 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <iostream>
#include <algorithm>

Span::Span (void) : limit(-1) {}

Span::Span (std::size_t capacity) : limit(capacity) {}

Span::Span (const Span &span) : limit(span.limit) {}

Span    &Span::operator=(const Span &span) {
    limit = span.limit;
    arr = span.arr;
    return (*this);
}

Span::~Span (void) {}

void    Span::addNumber(int elem) throw (std::exception) {
    if (arr.size() >= limit)
        throw std::exception();
    arr.push_back(elem);
}

int     Span::shortestSpan(void) throw (std::exception) {
    if (arr.size() == 0 || arr.size() == 1)
        throw std::exception();
    int min = *(std::min_element(arr.begin(), arr.end()));
    int sec_min = *(std::max_element(arr.begin(), arr.end()));
    for (std::size_t i = 0; i < arr.size(); i++) {
        if (sec_min > arr[i] && min != arr[i])
            sec_min = arr[i];
    }
    return (sec_min - min);
}

int     Span::longestSpan(void) throw (std::exception) {
    if (arr.size() == 0 || arr.size() == 1)
        throw std::exception();
    return (*(std::max_element(arr.begin(), arr.end()))
            - *(std::min_element(arr.begin(), arr.end())));
}
