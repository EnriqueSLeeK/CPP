/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 10:53:29 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/19 12:41:13 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <string>

class AForm;
class Bureaucrat;

class ShrubberyCreationForm : public AForm {
    private:
        const std::string target;

    public:
        ShrubberyCreationForm (void);
        ShrubberyCreationForm (const std::string nameF);
        ShrubberyCreationForm (const ShrubberyCreationForm &form);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &form);
        ~ShrubberyCreationForm (void);

        bool    execute(Bureaucrat const &executor) const;
};

#endif
