/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 00:04:02 by ensebast          #+#    #+#             */
/*   Updated: 2023/01/26 18:25:22 by ensebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <stdint.h>
#include <string>

class Data {
    private:
        std::string something;
    public:
        Data ();
        Data (const Data &data);
        Data &operator=(const Data &data);
        ~Data ();

        uintptr_t serialize(Data *ptr);
        Data      *deserialize(uintptr_t raw);
};

#endif
