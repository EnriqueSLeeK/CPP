/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 19:29:08 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/21 20:51:58 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <stdexcept>
#include <algorithm>
#include <iostream>
#include <ostream>
#include <vector>
#include <list>
#include <map>

template<typename T>
typename T::iterator easyfind(T &a, const int &b) throw (std::exception) {
    typename T::iterator ptr = find(a.begin(), a.end(), b);
    if (ptr == a.end())
        throw std::exception();
    return (ptr);
}

#endif
