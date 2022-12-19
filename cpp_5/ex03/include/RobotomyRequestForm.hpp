/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 10:57:46 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/19 12:41:06 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <string>

class AForm;
class Bureaucrat;

class RobotomyRequestForm : public AForm {
    private:
        const std::string target;

    public:
        RobotomyRequestForm (void);
        RobotomyRequestForm (const std::string nameF);
        RobotomyRequestForm (const RobotomyRequestForm &form);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &form);
        ~RobotomyRequestForm (void);

        bool    execute(Bureaucrat const &executor) const;
};

#endif
