/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:20:32 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/19 13:50:50 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentPardon.hpp"

#include <iostream>
#include <ostream>

Intern::Intern(void) {}
Intern::Intern (const Intern &obj) { (void) obj; }
Intern  &Intern::operator=(const Intern &obj) { 
    (void) obj;
    return (*this);
}
Intern::~Intern(void) {}

AForm   *Intern::makeForm(const std::string request, const std::string target) {
    const char *request_type[3] = {"robotomy request", "pardon request", "plant request"};
    AForm   *form_list[3] = {new RobotomyRequestForm(target),
        new PresidentPardon(target),
        new ShrubberyCreationForm(target)};
    AForm   *form = NULL;
    for (int i = 0; i < 3; i++) {
        if (request == request_type[i])
            form = form_list[i];
        else
            delete form_list[i];
    }
    return (form);
}
