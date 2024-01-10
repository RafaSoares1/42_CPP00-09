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

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap a("Rafael");
	std::cout << "💎 Attack Damage VALUE: " << a.getAD() << std::endl;
	std::cout << "💎 Energy VALUE: " << a.getEP() << std::endl;
	std::cout << "💎 Health Points VALUE : " << a.getHP() << std::endl;

	std::cout << std::endl;

	a.whoAmI();

	std::cout << std::endl;

	a.attack("Joao");
	std::cout << std::endl;
	
	return 0;
}
