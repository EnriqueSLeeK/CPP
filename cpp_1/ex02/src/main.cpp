/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:48:47 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/15 16:48:53 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <ostream>

int main() {
    
    std::string greeting = "HI THIS IS BRAIN";
    std::string *stringPTR = &greeting;
    std::string &stringREF = greeting;

    std::cout << "Addresses:";
    std::cout << "string:" << &greeting << std::endl;
    std::cout << "ptr:" << stringPTR << std::endl;
    std::cout << "ref:" << &stringREF << std::endl;

    std::cout << "Content";
    std::cout << "string:" << greeting << std::endl;
    std::cout << "ptr:" << *stringPTR << std::endl;
    std::cout << "ref:" << stringREF << std::endl;

}

