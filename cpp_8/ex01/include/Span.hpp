/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 21:05:57 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/28 18:29:43 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <stdexcept>

class Span {
    private:
        std::size_t       limit;
        std::vector<int>  arr;
    public:
        Span (void);
        Span (std::size_t capacity);
        Span (const Span &span);
        Span &operator=(const Span &span);
        ~Span (void);

        void    fill_number (int *begin, int *end) throw(std::exception);

        void    addNumber(int elem) throw(std::exception);
        int     shortestSpan(void) throw(std::exception);
        int     longestSpan(void) throw(std::exception);
};

#endif
