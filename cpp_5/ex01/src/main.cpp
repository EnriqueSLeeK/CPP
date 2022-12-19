/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:47:10 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/19 10:39:55 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#include <iostream>
#include <ostream>

void    basic_test () {
    Bureaucrat b("pupupup", 0);
    Bureaucrat t("pupupup", 156);
    Bureaucrat a("pupupup", 156);
    Bureaucrat o("pupupup", 156);
    Bureaucrat c("pupupup", 156);
    Bureaucrat d("pupupup", 0);
    Bureaucrat h("ppppppp", 5);
    std::cout << h << std::endl;
    h.increment();
    h.increment();
    h.increment();
    h.increment();
    h.increment();
    h.increment();
    h.increment();
    h.increment();
}

void    form_test () {
    Bureaucrat bb("Jop", 4);
    Form       form("checker of table", 1, 1);
    Form       form_two("random", 150, 1);
    bb.signForm(form);
    bb.signForm(form_two);

    Form       a("", 160, 1);
    Form       b("", 1, 160);
    Form       c("", 0, 1);
    Form       d("", 1, 0);
}

int main() {

    basic_test();
    std::cout << std::endl;
    form_test();
    return (0);
}

