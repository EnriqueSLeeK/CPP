/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:47:10 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/19 14:28:49 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentPardon.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

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
    Bureaucrat billy ("Billy", 150);

    ShrubberyCreationForm   a("wow");
    PresidentPardon   b("wow");
    RobotomyRequestForm  c("wow");

    ShrubberyCreationForm   x("wow");
    PresidentPardon   y("wow");
    RobotomyRequestForm  z("wow");

    std::cout << a << std::endl;
    bb.signForm(a);
    bb.signForm(b);
    bb.signForm(c);

    bb.executeForm(a);
    bb.executeForm(b);
    bb.executeForm(c);
    bb.executeForm(x);
    bb.executeForm(y);
    bb.executeForm(z);

    billy.executeForm(a);
    billy.executeForm(b);
    billy.executeForm(c);
    billy.executeForm(x);
    billy.executeForm(y);
    billy.executeForm(z);
}

void    intern_test() {
    Bureaucrat billyBob("Billy the Bob", 1);
    Intern     intern;
    AForm      *form;
    form = intern.makeForm("robotomy request", "Pew");
    billyBob.signForm(*form);
    billyBob.executeForm(*form);
    delete form;
}

int main() {

    basic_test();
    std::cout << std::endl;
    form_test();
    std::cout << std::endl;
    intern_test();
    return (0);
}

