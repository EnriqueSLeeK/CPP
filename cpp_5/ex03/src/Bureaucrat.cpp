/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 02:42:45 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/19 14:19:27 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>
#include <ostream>

const char *Bureaucrat::GradeTooHighException::what(void) const throw() {
    return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw() {
    return ("Grade too low");
}

Bureaucrat::Bureaucrat (void) :
    name("Default"), grade(150) {
}

Bureaucrat::Bureaucrat (const std::string nameB, int gradeB) : name(nameB) {
    try {
        if (gradeB > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (gradeB < 1)
            throw Bureaucrat::GradeTooHighException();
        grade = gradeB;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
        grade = -1;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
        grade = -1;
    }
}

Bureaucrat::Bureaucrat (const Bureaucrat &bureaucrat) {
    try {
        if (bureaucrat.getGrade() > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (bureaucrat.getGrade() < 1)
            throw Bureaucrat::GradeTooHighException();
        grade = bureaucrat.getGrade();
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
        grade = -1;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
        grade = -1;
    }
}

Bureaucrat &Bureaucrat::operator= (const Bureaucrat &bureaucrat) {
    try {
        if (bureaucrat.getGrade() > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (bureaucrat.getGrade() < 1)
            throw Bureaucrat::GradeTooHighException();
        grade = bureaucrat.getGrade();
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
        grade = -1;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
        grade = -1;
    }
    return (*this);
}

Bureaucrat::~Bureaucrat (void) {
}

const std::string Bureaucrat::getName(void) const {
    return (name);
}

int               Bureaucrat::getGrade(void) const {
    return (grade);
}

void              Bureaucrat::increment(void) {
    int tmp = grade - 1;
    try {
        if (tmp > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (tmp < 1)
            throw Bureaucrat::GradeTooHighException();
        grade = tmp;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
}

void              Bureaucrat::decrement(void) {
    int tmp = grade + 1;
    try {
        if (tmp > 150)
            throw Bureaucrat::GradeTooLowException();
        else if (tmp < 1)
            throw Bureaucrat::GradeTooHighException();
        grade = tmp;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
}

void    Bureaucrat::signForm(AForm &form) {
    form.beSigned(*this);
    if (form.getSignStatus())
        std::cout << name << " signed " << form.getName() << std::endl;
    else
        std::cout << name << " couldn't sign " << form.getName()
            << " because it lacks authority" << std::endl;
}

void    Bureaucrat::executeForm(AForm const &form) {
    try {
        if (!form.getSignStatus())
            throw AForm::FormNotSignedException();
        if (form.execute(*this))
            std::cout << name << " executed " << form.getName() << std::endl;
        else
            std::cout << name << " failed execution not enough authority" << std::endl;
    }
    catch (AForm::FormNotSignedException &e) {
        std::cout << e.what() << std::endl;
    }
}

std::ostream    &operator<< (std::ostream &out, const Bureaucrat &bureaucrat) {
    out << bureaucrat.getName() << ", bureaucrat grade "
        << bureaucrat.getGrade();
    return (out);
}
