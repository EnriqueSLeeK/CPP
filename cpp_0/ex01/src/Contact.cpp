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

std::string Contact::get_first_name() { return (first_name); }

std::string Contact::get_second_name() { return (second_name); }

std::string Contact::get_nickname() { return (nickname); }

std::string Contact::get_number() { return (number); }

std::string Contact::get_secret() { return (dark_secret); }
