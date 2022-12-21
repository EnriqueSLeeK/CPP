/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 00:38:16 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/21 01:13:46 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Functions.hpp"
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <stdexcept>
#include <cstdlib>
#include <iostream>
#include <ostream>

Base *generate(void) {
    switch (rand() % 3) {
        case 0:
            std::cout << "Created A" << std::endl;
            return (new A());
            break ;
        case 1:
            std::cout << "Created B" << std::endl;
            return (new B());
            break ;
        case 2:
            std::cout << "Created C" << std::endl;
            return (new C());
            break ;
    }
    return (NULL);
}

void    identify(Base *base) {
    A *a;
    B *b;
    C *c;

    a = dynamic_cast<A *>(base);
    if (a)
        std::cout << "A" << std::endl;
    b = dynamic_cast<B *>(base);
    if (b)
        std::cout << "B" << std::endl;
    c = dynamic_cast<C *>(base);
    if (c)
        std::cout << "C" << std::endl;

}

void    identify(Base &base) {
    A a;
    B b;
    C c;

    try {
        a = dynamic_cast<A &>(base);
        std::cout << "A" << std::endl;
    } catch (std::exception &e) {}
    try {
        b = dynamic_cast<B &>(base);
        std::cout << "B" << std::endl;
    } catch (std::exception &e) {}
    try {
        c = dynamic_cast<C &>(base);
        std::cout << "C" << std::endl;
    } catch (std::exception &e) {}
}
