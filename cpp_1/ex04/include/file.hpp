/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:50:59 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/15 16:51:03 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <ostream>

void write_start(std::ofstream &dst, std::ifstream &src,
        std::string from, std::string to);

#endif
