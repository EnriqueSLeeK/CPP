/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 22:39:50 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/22 00:04:03 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iterator>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
    public:
        MutantStack<T> (void) {}
        MutantStack<T> (const MutantStack &mutantStack) {}
        MutantStack<T> &operator= (const MutantStack &mutantStack) {}
        ~MutantStack<T> (void) {}

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin(void) { return (this->c.begin()); }
        iterator end(void) { return (this->c.end()); }

};

#endif
