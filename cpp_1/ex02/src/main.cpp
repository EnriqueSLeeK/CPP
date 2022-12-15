#include <string>
#include <iostream>
#include <ostream>

int main() {
    
    std::string greeting = "HI THIS IS BRAIN";
    std::string *stringPTR = &greeting;
    std::string &stringREF = greeting;

    std::cout << "Addresses:";
    std::cout << "string:" << &greeting << std::endl;
    std::cout << "ptr:" << stringPTR << std::endl;
    std::cout << "ref:" << &stringREF << std::endl;

    std::cout << "Content";
    std::cout << "string:" << greeting << std::endl;
    std::cout << "ptr:" << *stringPTR << std::endl;
    std::cout << "ref:" << stringREF << std::endl;

}

