/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 09:54:26 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/19 13:58:04 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

#include <iostream>
#include <ostream>

const char *AForm::GradeTooHighException::what() const throw() {
    return ("Grade too high");
}

const char *AForm::GradeTooLowException::what() const throw() {
    return ("Grade too low");
}

const char *AForm::FormNotSignedException::what() const throw() {
    return ("The form is not signed");
}

AForm::AForm (void) :
    name("Default"), gradeSignin(150), gradeToExecute(150) {
}

AForm::AForm (const std::string nameF,
        const int gradeSigninF,
        const int gradeToExecuteF) :
    name(nameF),
    gradeSignin(gradeSigninF),
    gradeToExecute(gradeToExecuteF) {
        try {
            if (gradeSignin < 1 || gradeToExecute < 1)
                throw AForm::GradeTooHighException();
            if (gradeSignin > 150 || gradeToExecute > 150)
                throw AForm::GradeTooLowException();
        }
        catch (AForm::GradeTooHighException &e) {
            std::cout << e.what() << std::endl;
        }
        catch (AForm::GradeTooLowException &e) {
            std::cout << e.what() << std::endl;
        }
        sign = false;
}

AForm::AForm (const AForm &form) :
    name(form.getName()),
    gradeSignin(form.getGradeSignin()),
    gradeToExecute(form.getGradeToExecute()) {
        try {
            if (gradeSignin < 1 || gradeToExecute < 1)
                throw AForm::GradeTooHighException();
            if (gradeSignin > 150 || gradeToExecute > 150)
                throw AForm::GradeTooLowException();
        }
        catch (AForm::GradeTooHighException &e) {
            std::cout << e.what() << std::endl;
        }
        catch (AForm::GradeTooLowException &e) {
            std::cout << e.what() << std::endl;
        }
        sign = form.getSignStatus();
}

AForm    &AForm::operator= (const AForm &form) {
    sign = form.getSignStatus();
    return (*this);
}

AForm::~AForm (void) {
}

const std::string   AForm::getName (void) const {
    return (name);
}

int                 AForm::getGradeSignin (void) const {
    return (gradeSignin);
}

int                 AForm::getGradeToExecute (void) const {
    return (gradeToExecute);
}

bool                AForm::getSignStatus (void) const {
    return (sign);
}

void                AForm::beSigned(const Bureaucrat &beaurecrat) {
    try {
        if (beaurecrat.getGrade() > gradeSignin)
            throw AForm::GradeTooLowException();
        sign = true;
    }
    catch (AForm::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
        sign = false;
    }
}


std::ostream    &operator<< (std::ostream &out, AForm &form) {
    out << "Form:" << std::endl
        << "name: " << form.getName() << std::endl
        << "sign-in grade: " << form.getGradeSignin() << std::endl
        << "execute grade: " << form.getGradeToExecute() << std::endl;
    return (out);
}
