/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:47:10 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/18 19:10:44 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#include <iostream>
#include <ostream>

static void    basic_operation_test (void) {

    Cat c;
    Dog d;

    Cat cc (c);
    Dog cd (d);

    Cat asc;
    Dog asd;

    asc = cc;
    asd = cd;

    std::cout << asc.getType() << std::endl;
    std::cout << asd.getType() << std::endl;
    c.makeSound();
    d.makeSound();
}

static void polymorphism () {
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    Animal* l = NULL;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    Brain *brain = j->getBrain();
    brain->add_idea("Pling!!!!!!!!!!! Eureka");
    brain->show_idea(0);
    l = new Dog(*j);
    brain = l->getBrain();
    brain->show_idea(0);
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    l->makeSound();

    delete l;
    delete i;
    delete j;
}

static void polymorphism_two () {
    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* i = new WrongCat();

    std::cout << i->getType() << " " << std::endl;

    meta->makeSound();
    i->makeSound();

    delete meta;
    delete i;
}

int main() {
    std::cout << std::endl << "-Basic" << std::endl << std::endl;
    basic_operation_test();

    std::cout << std::endl << "-Polymorphism" << std::endl << std::endl;
    polymorphism();

    std::cout << std::endl << "-Extra Polymorphism" << std::endl << std::endl;
    polymorphism_two();
    return (0);
}

