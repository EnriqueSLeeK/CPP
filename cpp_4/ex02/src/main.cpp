/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:47:10 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/22 23:19:24 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#include <iostream>
#include <ostream>

static void    basic_operation_test (void) {

    //Animal a;
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
    //const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    //meta->makeSound();
    i->makeSound(); //will output the cat sound!
    j->makeSound();

    //delete meta;
    delete i;
    delete j;
}

static void deep_copy () {
    const   Animal* pri = new Dog();
    const   Animal* sec = new Cat();
    Animal* copied = NULL;
    Animal* copied_2 = NULL;

    std::cout << "********************Base" << std::endl;

    std::cout << "********************Dog" << std::endl;
    pri->addIdea("wow!!!!!!!!!!!!!!!!");
    pri->addIdea("such idea!!!!!");
    pri->speakIdea(0);
    pri->speakIdea(1);

    std::cout << "********************Cat" << std::endl;
    sec->addIdea("Tuna for me and for my compatriots!");
    sec->addIdea("Thine tiny mind shall not understand my true feline ideals");
    sec->speakIdea(0);
    sec->speakIdea(1);

    copied = new Dog(pri);
    copied_2 = new Cat(sec);
    delete pri;
    delete sec;

    std::cout << "******************DeepCopy" << std::endl;
    std::cout << "********************Dog" << std::endl;
    copied->speakIdea(0);
    copied->speakIdea(1);
    delete copied;

    std::cout << "********************Cat" << std::endl;
    copied_2->speakIdea(0);
    copied_2->speakIdea(1);
    delete copied_2;

}

int main() {
    std::cout << std::endl << "-Basic" << std::endl << std::endl;
    basic_operation_test();
    polymorphism();

    std::cout << std::endl << "-DeepCopy test" << std::endl;
    deep_copy();

    return (0);
}

