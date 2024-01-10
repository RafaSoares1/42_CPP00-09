/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:59:09 by emsoares          #+#    #+#             */
/*   Updated: 2023/10/26 15:02:48 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::string zombie_name;
	std::string rChump;
	Zombie *zombie;

	std::cout << "Give a name to the Zombie: ";
	std::cin >> zombie_name;
	zombie = newZombie(zombie_name);
	zombie->announce();
	std::cout << "Give a name to the random Chump: ";
	std::cin >> rChump;
	randomChump(rChump);
	delete zombie;
	return (0);
}
