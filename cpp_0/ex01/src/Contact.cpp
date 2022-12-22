/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:48:47 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/22 16:12:03 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


Contact::Contact() {}

Contact::Contact (std::string f_name, std::string s_name,
        std::string nick, std::string num,
        std::string secret) {
    first_name = f_name;
    second_name = s_name;
    nickname = nick;
    number = num;
    dark_secret = secret;
}

Contact &Contact::operator= (const Contact &contact) {
    first_name = contact.first_name;
    second_name = contact.second_name;
    nickname = contact.nickname;
    number = contact.number;
    dark_secret = contact.dark_secret;
    return (*this);
}

std::string Contact::get_first_name() { return (first_name); }

std::string Contact::get_second_name() { return (second_name); }

std::string Contact::get_nickname() { return (nickname); }

std::string Contact::get_number() { return (number); }

std::string Contact::get_secret() { return (dark_secret); }
