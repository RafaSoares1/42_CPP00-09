/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:38:21 by emsoares          #+#    #+#             */
/*   Updated: 2023/10/24 14:25:53 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <unistd.h>

class PhoneBook;

class Contact
{
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	PhoneNumber;
		std::string	DarkestSecret;
	public:
		Contact();
		~Contact();
		std::string	getFirst();
		std::string	getLast();
		std::string	getNick();
		std::string	getNumber();
		std::string	getSecret();
		void	setFields();
		void	getFields();
};

std::string	ft_get_input(std::string str);
int	ft_check_input(std::string str, PhoneBook &pb);


#endif