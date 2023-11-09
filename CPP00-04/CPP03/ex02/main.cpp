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

#include "FragTrap.hpp"

int	main(void)
{
	std::cout << "\033[1;36mSCAVTRAP TESTS\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;33mTest 1: creating ClapTrap and FragTrap\033[0m" << std::endl;
	{
		FragTrap	B("SC4V-TP");
	}
	std::cout << std::endl;
	std::cout << "\033[1;33mTest 2: FragTrap Gives High Five\033[0m" << std::endl;
	{
		FragTrap	B("SC4V-TP");

		B.highFivesGuys();
	}
	return (0);
}
