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

int main(void) {

	ContactBook book;
    std::string contact_fields[5];

    get_fields(contact_fields);
    book.add_contact(create_contact(contact_fields));
    book.search_contact(0);
	return (0);
}
