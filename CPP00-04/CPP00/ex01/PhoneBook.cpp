/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:06:58 by emsoares          #+#    #+#             */
/*   Updated: 2023/10/23 17:57:07 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	size = 0;
	index = 0;
	std::cout << "---------------------" << std::endl;
	std::cout << "PHONE BOOK MANAGEMENT" << std::endl;
	std::cout << "---------------------" << std::endl;
	sleep(2);
	system("clear");
}

PhoneBook::~PhoneBook()
{
	std::cout << "-------------" << std::endl;
	std::cout << "SEE YOU SOON!" << std::endl;
	std::cout << "-------------" << std::endl;
}

void	PhoneBook::newContact()
{
	system("clear");
	std::cout << "------------------" << std::endl;
	std::cout << "CREATE NEW CONTACT" << std::endl;
	std::cout << "------------------" << std::endl;
	List[index].setFields();
	std::cout << "---------------" << std::endl;
	std::cout << "CONTACT CREATED" << std::endl;
	std::cout << "---------------" << std::endl;
	index++;
	size++;
	if(index == 8)
		index = 0;
	sleep(2);
	system("clear");
}

void	PhoneBook::searchContact()
{
	std::string str;
	if(!size)
	{
		std::cout << "ERROR: 0 CONTACTS IN YOUR PHONE BOOK\n\n" << std::endl;
		return ;
	}
	while(1)
	{
		outputSearch();
		str = ft_get_input("\nEnter the index of the contact or EXIT: ");
		if (str == "EXIT")
		{
			system("clear");
			break;
		}
		if (!isNumeric(str))
		{
			std::cout << "\nERROR: Input can only have numbers!" << std::endl;
			sleep(2);
			system("clear");
		}
		else
		{
			index = std::atoi(str.c_str());
			if(str.empty() || index < 0 || index > size - 1)
			{
				std::cout << "\nERROR: Invalid index, please try again" << std::endl;
				sleep(2);
				system("clear");
				continue ;
			}
			else
			{
				system("clear");
				std::cout << "---------------------" << std::endl;
				std::cout << "CONTACT[" << index <<"]INFORMATION" << std::endl;
				std::cout << "---------------------" << std::endl;
				List[index].getFields();
				while(1)
				{
					std::string input = ft_get_input("\nEnter EXIT: ");
					if (input == "EXIT")
					{
						system("clear");
						break;
					}
				}
			}
		}
	}
	
}

void	PhoneBook::outputSearch()
{
	std::cout << "-----------------" << std::endl;
	std::cout << "PHONE BOOK RECORD" << std::endl;
	std::cout << "-----------------" << std::endl;
	std::cout << std::setw(10) << "     INDEX|";
	std::cout << std::setw(10) << "     FIRST|";
	std::cout << std::setw(10) << "      LAST|";
	std::cout << std::setw(10) << "      NICK|" << std::endl;
	for(int	i = 0; (i < size && i < 8); i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << shortStr(List[i].getFirst()) << "|";
		std::cout << std::setw(10) << shortStr(List[i].getLast()) << "|";
		std::cout << std::setw(10) << shortStr(List[i].getNick()) << "|" << std::endl;
	}
	
}

bool	PhoneBook::isNumeric(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
		if(!isdigit(str[i]))
			return false;
	return true;
}

std::string PhoneBook::shortStr(std::string str)
{
	if (str.size() <= 9)
		return str;
	else
	{
		str.resize(9);
		str.append(".");
		return str;		
	}
}