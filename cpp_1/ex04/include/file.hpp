#ifndef FILE_HPP
# define FILE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <ostream>

void write_start(std::ofstream &dst, std::ifstream &src,
        std::string from, std::string to);

#endif
