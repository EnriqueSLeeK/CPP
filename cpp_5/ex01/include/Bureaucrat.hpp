/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 02:39:17 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/19 10:26:17 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Form.hpp"
#include <string>
#include <stdexcept>

class Form;

class Bureaucrat {
    private:
        const std::string   name;
        int                 grade;
    public:
        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        Bureaucrat (void);
        Bureaucrat (const std::string nameB, int grade);
        Bureaucrat (const Bureaucrat &bureaucrat);
        Bureaucrat &operator= (const Bureaucrat &bureaucrat);
        ~Bureaucrat (void);

        const std::string getName(void) const;
        int               getGrade(void) const;
        void              increment (void);
        void              decrement (void);
        void              signForm (Form &form);
};

std::ostream    &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);
#endif
