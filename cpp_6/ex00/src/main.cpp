/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:47:10 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/20 20:09:12 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Number.hpp"
#include <ostream>
#include <iostream>

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Wrong argument number!" << std::endl;
        return (1);
    }
    Number  num(argv[1]);
    std::cout << num << std::endl;
    return (0);
}

