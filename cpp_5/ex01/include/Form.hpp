/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 09:40:22 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/19 12:40:35 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <stdexcept>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    private:
        const std::string   name;
        const int           gradeSignin;
        const int           gradeToExecute;
        bool                sign;

    public:
        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        Form (void);
        Form (const std::string nameF, const int gradeSigninF, const int gradeToExecuteF);
        Form (const Form &form);
        Form &operator= (const Form &form);
        ~Form (void);

        void                beSigned(const Bureaucrat &bureaucrat);

        const std::string   getName (void) const;
        int                 getGradeSignin (void) const;
        int                 getGradeToExecute (void) const;
        bool                getSignStatus (void) const;
};

std::ostream    &operator<< (std::ostream &out, Form &form);

#endif
