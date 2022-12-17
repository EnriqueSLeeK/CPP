/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:48:48 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/15 16:48:53 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <ostream>

int main(int argc, char *argv[]) {

    if (argc != 2) {
        std::cerr << "Usage: ./HarlHarr <level of complain>" << std::endl;
        return (1);
    }
    std::string speak(argv[1]);
    Harl    harl;
    harl.complain(speak);
    return (0);
}
