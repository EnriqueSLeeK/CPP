/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */ /*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:14:55 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/07 18:16:28 by ensebast         ###   ########.br       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT
# define CONTACT

# include <iostream>

class Contact {

    private:
        std::string first_name;
        std::string second_name;
        std::string nickname;
        std::string number;
        std::string dark_secret;

	public:

        Contact ();
        Contact (std::string, std::string, std::string,
                std::string, std::string);

        std::string get_first_name();
        std::string get_second_name();
        std::string get_nickname();
        std::string get_number();
        std::string get_secret();
};

#endif
