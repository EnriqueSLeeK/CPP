/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:48:47 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/22 14:50:51 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "ContactBook.hpp"
#include <string>
#include <iostream>

void    get_fields(std::string *fields) {

    int         field_filled;
    const char  *field_name[5] = {"first name", "second name",\
        "nickname", "number", "dark secret"};

    field_filled = 0;
    while (field_filled < 5) {
        std::cout << field_name[field_filled] << ": ";
        std::getline(std::cin, fields[field_filled]);
        if (fields[field_filled] != "" && fields[field_filled][0] != ' ')
            field_filled++;
    }
}

Contact create_contact(std::string *fields) {
        Contact contact(fields[0], fields[1],
                fields[2], fields[3], fields[4]);
        return (contact);
}

int     get_index(void) {
    std::cout << "Input an index: ";
    int index = 0;
    if (!(std::cin >> index) || std::cin.tellg() != -1)
        return (-1);
    return (index);
}

int main(void) {

	ContactBook book;
    std::string contact_fields[5];
    std::string cmd;

    do {
        std::getline(std::cin, cmd);
        if (cmd == "ADD") {
            get_fields(contact_fields);
            book.add_contact(create_contact(contact_fields));
        }
        else if (cmd == "SEARCH") {
            book.search_contact(get_index());
        }
    } while (cmd != "EXIT");

	return (0);
}
