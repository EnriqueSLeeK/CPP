/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:47:10 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/21 20:52:40 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
    std::vector<int> vec;
    for (int i=1; i<=5; i++) vec.push_back(i);
    try {
        std::cout << *(::easyfind(vec, 4)) << std::endl;
    } catch (std::exception &e) {
        std::cout << "Not found!" << std::endl;
    }
    return (0);
}

