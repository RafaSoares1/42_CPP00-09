/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:36:05 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/08 14:36:05 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "\033[1;36mSCAVTRAP TESTS\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;33mTest 1: creating ClapTrap and ScavTrap\033[0m" << std::endl;
	{
		ClapTrap	A("R2D2");
		ScavTrap	B("SC4V-TP");
	}
	std::cout << std::endl;
	std::cout << "\033[1;33mTest 2: ScavTrap attacks ClapTrap\033[0m" << std::endl;
	{
		ClapTrap	A("R2D2");
		ScavTrap	B("SC4V-TP");

		B.attack("R2D2");
		A.takeDamage(20);
	}
	std::cout << std::endl;
	std::cout << "\033[1;33mTest 3: ScavTrap enters gate keeper mode\033[0m" << std::endl;
	{
		ScavTrap	B("SC4V-TP");

		B.guardGate();
	}
	return (0);
}
