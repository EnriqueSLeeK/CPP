/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:16:02 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/19 14:16:58 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

#include <cstdlib>
#include <iostream>
#include <ostream>

RobotomyRequestForm::RobotomyRequestForm (void) :
    AForm::AForm("Robotomy request", 72, 45), target("Default") {
}

RobotomyRequestForm::RobotomyRequestForm (const std::string targetF) :
     AForm::AForm("Robotomy request", 72, 45), target(targetF) {
}

RobotomyRequestForm::RobotomyRequestForm (const RobotomyRequestForm &form) :
    AForm::AForm("Robotomy request", 72, 45), target(form.target) {
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &form) {
    (void)form;
    return (*this);
};

RobotomyRequestForm::~RobotomyRequestForm (void) {}

bool    RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    int executor_grade = executor.getGrade();

    try {
        if (executor_grade > getGradeToExecute() || executor_grade < 0)
            throw AForm::GradeTooLowException();
    std::cout << target << 
        ": * Piiiiiiiiiiiiiiiiiiiii * => ";
    std::srand(time(NULL));
    if (std::rand() % 2)
        std::cout << "Robotomy success" << std::endl;
    else
        std::cout << "Robotomy failure" << std::endl;
    }
    catch (AForm::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
        return (false);
    }
    return (true);
}
