/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:47:10 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/28 18:37:24 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "MutantStack.hpp"

#include <list>
#include <iostream>
#include <ostream>

int main() {
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        mstack.pop();
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(1);

        std::cout << "Normal> " << std::endl;
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }

        std::cout << "Reverse> " << std::endl;
        MutantStack<int>::reverse_iterator rit = mstack.rbegin();
        MutantStack<int>::reverse_iterator rite = mstack.rend();
        while (rit != rite)
        {
            std::cout << *rit << std::endl;
            ++rit;
        }
    }
    {
        std::list<int> mstack;
        mstack.push_back(5);
        mstack.push_back(17);
        mstack.pop_back();
        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);
        mstack.push_back(1);

        std::cout << "Normal> " << std::endl;
        std::list<int>::iterator it = mstack.begin();
        std::list<int>::iterator ite = mstack.end();
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }

        std::cout << "Reverse> " << std::endl;
        std::list<int>::reverse_iterator rit = mstack.rbegin();
        std::list<int>::reverse_iterator rite = mstack.rend();
        while (rit != rite)
        {
            std::cout << *rit << std::endl;
            ++rit;
        }
    }

    return 0;
}

