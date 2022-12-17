/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:48:47 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/15 16:48:53 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"

static int  check_argument_number (int argc) {
    if (argc != 4) {
        std::cerr << "Usage: ./program <filename> <pattern_1> <pattern_2>"
            << std::endl;
        return (1);
    }
    return (0);
}

static std::string convert_to_string (const char *line) {
    std::string str(line);
    return (str);
}

int main(int argc, char *argv[]) {

    if (check_argument_number(argc))
        return (1);
    std::string   filename (argv[1]);
    std::ifstream file_src (filename.c_str());
    if (file_src == NULL) {
        std::cerr << "Failed at opening file" << std::endl;
        return (1);
    }
    std::ofstream file_dst ((filename + ".replace").c_str());

    write_start (file_dst, file_src,
            convert_to_string(argv[2]),
            convert_to_string(argv[3]));

    file_src.close();
    file_dst.close();

    return (0);
}
