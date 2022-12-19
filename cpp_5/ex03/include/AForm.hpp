/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 09:40:22 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/19 14:00:04 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <stdexcept>

class Bureaucrat;

class AForm {
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
        class FormNotSignedException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        AForm (void);
        AForm (const std::string nameF, const int gradeSigninF, const int gradeToExecuteF);
        AForm (const AForm &form);
        AForm &operator= (const AForm &form);
        virtual ~AForm (void);

        void                beSigned(const Bureaucrat &bureaucrat);
        virtual bool        execute(Bureaucrat const &executor) const = 0;

        const std::string   getName (void) const;
        int                 getGradeSignin (void) const;
        int                 getGradeToExecute (void) const;
        bool                getSignStatus (void) const;
};

std::ostream    &operator<< (std::ostream &out, AForm &form);

#endif
