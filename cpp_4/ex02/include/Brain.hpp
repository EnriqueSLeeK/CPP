/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:37:17 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/18 19:06:42 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain {
    private:
        std::string ideas[100];
        static const int capacity;
        int occupied;
    public:
        Brain (void);
        Brain (const Brain &obj);
        Brain &operator= (const Brain &obj);
        ~Brain (void);
        void    add_idea (std::string idea);
        void    show_idea (int index) const;
        void    delete_idea (void);
};

#endif
