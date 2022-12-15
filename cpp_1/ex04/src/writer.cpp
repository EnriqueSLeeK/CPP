#include "file.hpp"

static void copy_file (std::ofstream &dst, std::ifstream &src) {

    std::string buff;

    while (getline(src, buff))
        dst << buff << std::endl;

}

static void write_interval (std::ofstream &dst, std::string line, int begin, int end) {
    for (int i = begin; i < end; i++) {
        dst << line[i];
    }
}

static void copy_and_substute (std::ofstream &dst, std::ifstream &src, std::string from, std::string to) {

    std::string buff;
    int offset = from.length();
    int begin;
    int end;

    while (getline(src, buff)) {
        begin = 0;
        while ((end = buff.find(from, begin)) != -1) {
            write_interval(dst, buff, begin, end);
            dst << to;
            begin = end + offset;
        }
        write_interval(dst, buff, begin, buff.length());
        dst << std::endl;
    }
}

// Substitute the "from" pattern to "to" pattern
void    write_start (std::ofstream &dst, std::ifstream &src, std::string from, std::string to) {

    if (from.empty()) { return (copy_file(dst, src)); }
    if (from == to) { return (copy_file(dst, src)); }
    copy_and_substute(dst, src, from, to);
}
