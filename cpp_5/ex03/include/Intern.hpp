/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:15:28 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/19 13:48:30 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include "AForm.hpp"

class AForm;

class Intern {
    public:
        Intern (void);
        Intern (const Intern &obj);
        Intern &operator=(const Intern &obj);
        ~Intern (void);

        AForm   *makeForm(const std::string request, const std::string target);
};

#endif
