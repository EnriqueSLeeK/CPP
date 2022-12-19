/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:47:10 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/18 17:20:50 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#include <iostream>
#include <ostream>

static void    basic_operation_test (void) {

    Animal a;
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
    a.makeSound();
    c.makeSound();
    d.makeSound();
}

static void polymorphism () {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    meta->makeSound();
    i->makeSound(); //will output the cat sound!
    j->makeSound();

    delete meta;
    delete i;
    delete j;
}

static void polymorphism_two () {
    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* i = new WrongCat();

    std::cout << i->getType() << " " << std::endl;

    meta->makeSound();
    i->makeSound(); //will output the cat sound!

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

