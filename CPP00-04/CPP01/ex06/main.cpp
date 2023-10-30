/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:26:58 by emsoares          #+#    #+#             */
/*   Updated: 2023/10/30 23:13:45 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return(std::cerr << "Invalid number of arguments!" << std::endl,2);
	Harl harlFilter;

	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;
	for(i = 0; i < 4; i++)
		if(levels[i] == av[1])
			break;
	
	switch(i){
		case 0:
			harlFilter.complain("DEBUG");
			break;
		case 1:
			harlFilter.complain("INFO");
			break;
		case 2:
			harlFilter.complain("WARNING");
			break;
		case 3:
			harlFilter.complain("ERROR");
			break;
		default:
			std::cout << "\n[Probably complaining about insignificant problem]" << std::endl;
	}
	
	return 0;
}
