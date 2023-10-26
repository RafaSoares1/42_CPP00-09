/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:02:12 by emsoares          #+#    #+#             */
/*   Updated: 2023/10/26 16:08:30 by emsoares         ###   ########.fr       */
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

int main()
{
	std::string name;
	std::string n;
	Zombie *zombies;
	int	num;

	std::cout << "Choose the number of zombies: ";
	std::cin >> n;
	
	if(!isNumeric(n))
	{
		std::cout << "\nERROR: Input can only have numbers!" << std::endl;
		return 1;
	}
	else
		num = std::atoi(n.c_str());
	std::cout << "Give a general name to your zombies: ";
	std::cin >> name;
	zombies = zombieHorde(num, name);
	for(int i = 0; i < num; i++)
		zombies[i].announce();
	return 0;
}