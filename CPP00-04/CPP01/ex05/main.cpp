/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:26:58 by emsoares          #+#    #+#             */
/*   Updated: 2023/10/30 22:07:49 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl2;

	harl2.complain("DEBUG");
	std::cout << "\n";
	harl2.complain("ERROR");
	std::cout << "\n";
	harl2.complain("INFO");
	std::cout << "\n";
	harl2.complain("WARNING");
	std::cout << "\n";
	return 0;
}