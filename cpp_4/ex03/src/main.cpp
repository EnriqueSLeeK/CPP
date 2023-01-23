/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:47:10 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/22 23:41:32 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#include <iostream>
#include <ostream>

void basic_test() {
    MateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria    *tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;
}

void too_many_materia() {
    MateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria    *a = src->createMateria("ice");
    AMateria    *b = src->createMateria("ice");
    AMateria    *c = src->createMateria("cure");
    AMateria    *d = src->createMateria("cure");

    me->equip(a);
    me->equip(b);
    me->equip(c);
    me->equip(d);
    me->equip(a);
    me->equip(b);
    me->unequip (0);
    me->equip(a);
    me->equip(d);

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    delete me;
    delete src;
}

int main() {

    std::cout << "################### Basic test ##################" << std::endl;
    basic_test();

    std::cout << std::endl;

    std::cout << "#############Too many materia test ##############" << std::endl;
    too_many_materia();

    return 0;
}
