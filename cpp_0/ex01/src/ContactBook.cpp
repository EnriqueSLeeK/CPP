/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactBook.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:48:47 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/22 16:12:33 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include "ContactBook.hpp"

ContactBook::ContactBook () {
    count = 0;
    capacity = 8;
}

void    ContactBook::error_message(const char *msg) {
    std::cerr << msg << std::endl;
}

std::string ContactBook::truncate(std::string field, unsigned int n) {
    if (field.length() < n)
        return (field);
    return (field.substr(0, n - 1) + ".");
}
void    ContactBook::show_contact(int index) {
    Contact contact = book[index];
    std::cout << std::setw(10) << index << "|"
        << std::setw(10) << truncate(contact.get_first_name(), 10)  << "|"
        << std::setw(10) << truncate(contact.get_second_name(), 10) << "|"
        << std::setw(10) << truncate(contact.get_nickname(), 10) << std::endl;
}

void	ContactBook::add_contact(Contact c) {
    if (count == capacity) {
        book[capacity - 1] = c;
        return ;
    }
    book[count] = c;
    count++;
}

void    ContactBook::search_contact(int index) {
    if (index >= capacity or index < 0)
        return (error_message("Index out of bound"));
    if (index >= count)
        return (error_message("The entry does not exist yet"));
    show_contact(index);
}
