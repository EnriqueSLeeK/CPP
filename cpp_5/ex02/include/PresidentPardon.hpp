/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentPardon.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:02:29 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/19 12:41:02 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTPARDON_HPP
# define PRESIDENTPARDON_HPP

#include "AForm.hpp"
#include <string>

class AForm;
class Bureaucrat;

class PresidentPardon : public AForm {
    private:
        const std::string target;

    public:
        PresidentPardon (void);
        PresidentPardon (const std::string target);
        PresidentPardon (const PresidentPardon &form);
        PresidentPardon &operator=(const PresidentPardon &form);
        ~PresidentPardon (void);

        bool    execute(Bureaucrat const &executor) const;
};

#endif
