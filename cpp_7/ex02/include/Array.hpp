/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:01:40 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/23 01:02:46 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array {
    private:
        unsigned int        quant;
        unsigned int        capacity;
        T                   *array;

    public:
        Array<T> (void) : quant(0), capacity(0),  array(NULL) {}

        Array<T> (unsigned int n) : quant(0), capacity(n), array(new T[n]) {}

        Array<T> (const Array<T> &arr) : quant(arr.quant),
                                            capacity(arr.capacity),
                                            array(new T[arr.quant]) {
            for (unsigned int i = 0; i < quant; i++) {
                array[i] = arr.array[i];
            }
        }

        Array<T> &operator= (const Array<T> &arr) {
            capacity = arr.capacity;
            quant = arr.quant;
            array = arr.array;
        }

        ~Array<T> (void) {
            delete [] array;
        }

        T   &operator[] (unsigned int i) throw(std::exception) {
                if (i >= capacity)
                    throw std::exception();
                if (quant < capacity)
                    quant++;
                return (array[i]);
        }

        const T   &operator[] (unsigned int i) const throw(std::exception) {
                if (i >= capacity)
                    throw std::exception();
                return (array[i]);
        }

        unsigned int    size(void) {
            return (quant);
        }
};

#endif
