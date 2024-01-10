/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:27:00 by emsoares          #+#    #+#             */
/*   Updated: 2023/10/24 14:20:40 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"

# include <iostream>
# include <string>
# include <cstdlib>
# include <iomanip>
# include <unistd.h>

class Contact;

class PhoneBook
{
	private:
		Contact List[8];
		int index;
		int		size;
	public:
		PhoneBook();
		~PhoneBook();
		void	newContact();
		void	searchContact();
		void	outputSearch();
		bool	isNumeric(std::string str);
		std::string shortStr(std::string str);
};

#endif