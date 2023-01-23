/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 09:54:26 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/23 00:43:12 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

#include <iostream>
#include <ostream>

const char *Form::GradeTooHighException::what() const throw() {
    return ("Grade too high");
}

const char *Form::GradeTooLowException::what() const throw() {
    return ("Grade too low");
}


Form::Form (const std::string nameF,
        const int gradeSigninF,
        const int gradeToExecuteF) :
    name(nameF),
    gradeSignin(gradeSigninF),
    gradeToExecute(gradeToExecuteF) {
        try {
            if (gradeSignin < 1 || gradeToExecute < 1)
                throw Form::GradeTooHighException();
            if (gradeSignin > 150 || gradeToExecute > 150)
                throw Form::GradeTooLowException();
        }
        catch (Form::GradeTooHighException &e) {
            std::cout << e.what() << std::endl;
        }
        catch (Form::GradeTooLowException &e) {
            std::cout << e.what() << std::endl;
        }
        sign = false;
}

Form::Form (const Form &form) :
    name(form.getName()),
    gradeSignin(form.getGradeSignin()),
    gradeToExecute(form.getGradeToExecute()) {
        try {
            if (gradeSignin < 1 || gradeToExecute < 1)
                throw Form::GradeTooHighException();
            if (gradeSignin > 150 || gradeToExecute > 150)
                throw Form::GradeTooLowException();
        }
        catch (Form::GradeTooHighException &e) {
            std::cout << e.what() << std::endl;
        }
        catch (Form::GradeTooLowException &e) {
            std::cout << e.what() << std::endl;
        }
        sign = form.getSignStatus();
}

Form    &Form::operator= (const Form &form) {
    sign = form.getSignStatus();
    return (*this);
}

Form::~Form (void) {
}

void                Form::beSigned(const Bureaucrat &bureaucrat) {
    try {
        if (bureaucrat.getGrade() != -1
            && bureaucrat.getGrade() > gradeSignin)
            throw Form::GradeTooLowException();
        sign = true;
    }
    catch (Form::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
        sign = false;
    }
}

const std::string   Form::getName (void) const {
    return (name);
}

int                 Form::getGradeSignin (void) const {
    return (gradeSignin);
}

int                 Form::getGradeToExecute (void) const {
    return (gradeToExecute);
}

bool                Form::getSignStatus (void) const {
    return (sign);
}


std::ostream    &operator<< (std::ostream &out, Form &form) {
    out << "Form" << std::endl
        << "name: " << form.getName() << std::endl
        << "sign-in grade: " << form.getGradeSignin() << std::endl
        << "execute grade: " << form.getGradeToExecute() << std::endl
        << "status: " << form.getSignStatus() << std::endl;
    return (out);
}
