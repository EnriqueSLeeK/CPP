/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 23:27:20 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/22 23:44:29 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

#include <iostream>
#include <ostream>

MateriaSource::MateriaSource (void) {

    for (int i = 0; i < 4; i++)
        materia_memory[i] = NULL;
    for (int i = 0; i < 100; i++)
        materia_bank[i] = NULL;

    memory_index = 0;
    bank_index = 0;
}

MateriaSource::MateriaSource (const MateriaSource &src) {
    *this = src;
}

MateriaSource   &MateriaSource::operator=(const MateriaSource &src) {
    for (int i = 0; i < 4; i++) {
        if (src.materia_memory[i])
            materia_memory[i] = src.materia_memory[i]->clone();
    }

    for (int i = 0; i < 100; i++) {
        if (src.materia_bank[i])
            materia_bank[i] = src.materia_bank[i]->clone();
    }
    return (*this);
}

MateriaSource::~MateriaSource (void) {
    for (int i = 0; i < 4; i++)
        if (materia_memory[i])
            delete materia_memory[i];
    for (int i = 0; i < 100; i++)
        if (materia_bank[i])
            delete materia_bank[i];
}

AMateria    *MateriaSource::createMateria(std::string const &type) {

    if (bank_index >= 100 && destroyMateria() == 0) {
        std::cout << "Materia Bank limit reached!" <<std::endl;
        return (NULL);
    }
    for (int i = 0; i < 4; i++) {
        if (materia_memory[i] && type == materia_memory[i]->getType()) {
            std::cout << "Materia Created" << std::endl;
            putIntoBank(materia_memory[i]->clone());
            return (materia_bank[bank_index - 1]);
        }
    }
    std::cout << "Unknown materia" <<  std::endl;
    return (NULL);
}

void        MateriaSource::learnMateria (AMateria *materia) {
    if (memory_index >= 4) {
        std::cout << "Materia memory limit reached!" << std::endl;
        return ;
    }
    materia_memory[memory_index] = materia;
    memory_index++;
}

void        MateriaSource::putIntoBank (AMateria *materia) {
    for (int i = 0; i < 100; i++)
        if (materia_bank[i] == NULL) {
            materia_bank[i] = materia;
            bank_index++;
            return ;
        }
}

void        MateriaSource::forgetMateria (void) {
    if (memory_index == 0)
        return ;
    memory_index--;
    delete materia_memory[memory_index];
    materia_memory[memory_index] = NULL;
}

// Find a dropped materia, and check if is being used, if not destroy it
int         MateriaSource::destroyMateria (void) {
    if (memory_index == 0)
        return (-1);
    for (int i = 0; i < 100; i++)
        if (!materia_bank[i]->getEquiped())
        {
            delete materia_bank[i];
            materia_bank[i] = NULL;
            bank_index--;
            return (1);
        }
    return (0);
}
