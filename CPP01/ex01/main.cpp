/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:02:12 by emsoares          #+#    #+#             */
/*   Updated: 2023/10/27 16:22:02 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

bool	isNumeric(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
		if(!isdigit(str[i]))
			return false;
	return true;
}

int main(int ac, char **av)
{
	(void)av;

	if(ac > 1)
	{
		std::cout << "Error: To many arguments!" << std::endl;
		return 0;
	}
	std::string name;
	std::string n;
	Zombie *zombies;
	int	num;

	while(1)
	{
		std::cout << "Choose the number of zombies: ";
		std::cin >> n;
		
		if(!isNumeric(n))
			std::cout << "\nERROR: Input can only have numbers!" << std::endl;
		else
		{
			num = std::atoi(n.c_str());
			break;
		}
	}
	std::cout << "Give a general name to your zombies: ";
	std::cin >> name;
	zombies = zombieHorde(num, name);
	for(int i = 0; i < num; i++)
		zombies[i].announce();
	delete [] zombies;
	return 0;
}
