/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:06:28 by emsoares          #+#    #+#             */
/*   Updated: 2023/10/24 14:18:43 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::getFirst()
{
	return(FirstName);
}

std::string Contact::getLast()
{
	return(LastName);
}

std::string Contact::getNick()
{
	return(NickName);
}

std::string Contact::getNumber()
{
	return(PhoneNumber);
}

std::string	Contact::getSecret()
{
	return(DarkestSecret);	
}

void	Contact::setFields()
{
	FirstName = ft_get_input("Enter the first name: ");
	LastName = ft_get_input("Enter the last name: ");
	NickName = ft_get_input("Enter the nick name: ");
	PhoneNumber = ft_get_input("Enter the phone number: ");
	DarkestSecret = ft_get_input("Enter the darkest secret: ");
}

void	Contact::getFields()
{
	std::cout << std::setw(10) << "    FIRST NAME: " << getFirst() << std::endl;
	std::cout << std::setw(10) << "     LAST NAME: " << getLast() << std::endl;
	std::cout << std::setw(10) << "     NICK NAME: " << getNick() << std::endl;
	std::cout << std::setw(10) << "  PHONE NUMBER: " << getNumber() << std::endl;
	std::cout << std::setw(10) << "DARKEST SECRET: " << getSecret() << std::endl;
}
