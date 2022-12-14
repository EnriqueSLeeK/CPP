/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contactBook.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ensebast <ensebast@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:28:26 by ensebast          #+#    #+#             */
/*   Updated: 2022/12/07 18:16:40 by ensebast         ###   ########.br       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTBOOK
# define CONTACTBOOK

# include "Contact.hpp"


class ContactBook {

	private:

		int		count;
        int     capacity;
		Contact	book[8];

	public:
		ContactBook();
		
		void	    add_contact(Contact c);
		void        search_contact(int index);
        void        show_contact(int index);
        void        error_message(const char *msg);
        std::string truncate(std::string field, unsigned int n);
};

#endif
