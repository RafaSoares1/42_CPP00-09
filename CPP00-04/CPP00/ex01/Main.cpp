/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:25:58 by emsoares          #+#    #+#             */
/*   Updated: 2023/10/24 14:19:15 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"


int	ft_check_input(std::string str, PhoneBook &pb)
{
	if (str == "ADD")
		pb.newContact();
	else if (str == "SEARCH")
	{
		system("clear");
		pb.searchContact();
	}
	else if (str == "EXIT")
	{
		std::cout << "Closing PhoneBook..." << std::endl;
		return 1;
	}
	else
		std::cout << "Invalid option! Please choose one of the following:" << std::endl;
	return 0;
}

std::string ft_get_input(std::string str)
{
	std::string input;
	while(input.empty())
	{
		std::cout << str;
		if (!std::getline(std::cin, input))
		{
			std::cout << "Closing PhoneBook (CTRL+D pressed)" << std::endl;
			exit (2);
		}
	}
	return (input);
}

int main(int ac, char **av)
{
	(void)av;
	if (ac > 1)
	{
		std::cout << "Invalid number of arguments. Just run it with ./PhoneBook " << std::endl;
		return (2);
	}
	PhoneBook pb;
	std::string str;
	while (1)
	{
		std::cout << "---------------------------------" << std::endl;
		std::cout << "PROGRAM MENU: ADD | SEARCH | EXIT" << std::endl;
		std::cout << "---------------------------------" << std::endl;
		str = ft_get_input("Enter Your Choice --> ");
		if(ft_check_input(str, pb))
			break;
	}
	return 0;	
}
