/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:54:18 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/18 19:06:52 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <iostream>
#include <ostream>

const int Brain::capacity = 100;

Brain::Brain (void) {
    occupied = 0;
    std::cout << "Brain created" << std::endl;
}

Brain::Brain (const Brain &obj) {
    occupied = obj.occupied;
    for (int i = 0; i < occupied; i++)
        ideas[i] = obj.ideas[i];
    std::cout << "Brain copy" << std::endl;
}

Brain &Brain::operator= (const Brain &obj) {
    occupied = obj.occupied;
    for (int i = 0; i < occupied; i++)
        ideas[i] = obj.ideas[i];
    std::cout << "Brain copy assign" << std::endl;
    return (*this);
}

Brain::~Brain (void) {
    std::cout << "Brain destroyed" << std::endl;
}

void    Brain::add_idea (std::string idea) {
    if (occupied >= capacity)
        return ;
    ideas[occupied] = idea;
    occupied++;
}

void    Brain::delete_idea (void) {
    occupied--;
}

void    Brain::show_idea (int index) const {
    if (index >= occupied)
        return ;
    std::cout << ideas[index] << std::endl;
}
