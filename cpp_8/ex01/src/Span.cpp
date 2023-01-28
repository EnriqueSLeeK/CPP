/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:09:32 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/28 19:21:37 by ensebast         ###   ########.fr       */
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
    if (arr.size() <= 1)
        throw std::exception();
    sort(arr.begin(), arr.end());
    int min = arr[1] - arr[0];
    if (arr.size() == 2)
        return (min);
    for (std::size_t i = 1; i < arr.size() - 1; i++) {
        if (min > arr[i] - arr[i + 1])
            min = arr[i + 1] - arr[i];
    }
    return (min);
}

int     Span::longestSpan(void) throw (std::exception) {
    if (arr.size() == 0 || arr.size() == 1)
        throw std::exception();
    return (*(std::max_element(arr.begin(), arr.end()))
            - *(std::min_element(arr.begin(), arr.end())));
}

void    Span::fill_number (int *begin, int *end)
        throw (std::exception) {
    while (begin != end) {
        if (arr.size() >= limit)
            throw std::exception();
        arr.push_back(*begin);
        ++begin;
    }
}
