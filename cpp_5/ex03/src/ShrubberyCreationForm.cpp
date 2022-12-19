/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:16:02 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/19 14:16:51 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#include <fstream>
#include <iostream>
#include <ostream>

ShrubberyCreationForm::ShrubberyCreationForm (void) :
     AForm::AForm("Shrubbery plant request", 145, 137), target("Default") {
}

ShrubberyCreationForm::ShrubberyCreationForm (const std::string targetF) :
     AForm::AForm("Shrubbery plant request", 145, 137), target(targetF) {
}

ShrubberyCreationForm::ShrubberyCreationForm (const ShrubberyCreationForm &form) :
    AForm::AForm("Shrubbery plant request", 145, 137), target(form.target) {
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form) {
    (void)form;
    return (*this);
};

ShrubberyCreationForm::~ShrubberyCreationForm (void) {}

bool    ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    int executor_grade = executor.getGrade();

    try {
        if (executor_grade > getGradeToExecute() || executor_grade < 0)
            throw AForm::GradeTooLowException();
        std::ofstream o;
        o.open ((target + "_shrubbery").c_str());
        o << "-OOO-" << std::endl;
        o << "I - I" << std::endl;
        o << "I - I" << std::endl;
        o << "I - I" << std::endl;
        o << "I - I" << std::endl;
        o << "-OOO-" << std::endl;
        o << "  I  " << std::endl;
        o << "l---l" << std::endl;
        o.close();
    }
    catch (AForm::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
        return (false);
    }
    return (true);
}
