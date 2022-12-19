/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentPardon.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:16:02 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/19 14:12:35 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentPardon.hpp"

#include <iostream>
#include <ostream>

PresidentPardon::PresidentPardon (void) :
    AForm::AForm("Presidential Pardon", 25, 5), target("Default") {
}

PresidentPardon::PresidentPardon (const std::string targetF) :
     AForm::AForm("Presidential Pardon", 25, 5), target(targetF) {
}

PresidentPardon::PresidentPardon (const PresidentPardon &form) :
    AForm::AForm("Presidential Pardon", 25, 5), target(form.target) {
}

PresidentPardon &PresidentPardon::operator=(const PresidentPardon &form) {
    (void)form;
    return (*this);
};

PresidentPardon::~PresidentPardon (void) {}

bool    PresidentPardon::execute(Bureaucrat const &executor) const {
    int executor_grade = executor.getGrade();
    try {
        if (executor_grade > getGradeToExecute() || executor_grade < 0)
            throw AForm::GradeTooLowException();
        std::cout << target << 
            " has been pardoned by Zaphod Beeblebox the president of the Unknown Lands" << std::endl;
    }
    catch (AForm::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
        return (false);
    }
    return (true);
}
