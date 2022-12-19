/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:47:10 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/19 03:57:28 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>
#include <ostream>

int main() {
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
    return (0);
}

