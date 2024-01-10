/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:27:53 by emsoares          #+#    #+#             */
/*   Updated: 2023/10/26 12:58:25 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string given_name) : name(given_name)
{
	
}

Zombie::~Zombie()
{
	std::cout << name << " died 💀🪦" << std::endl;	
}

void	Zombie::announce()
{
	std::cout << name << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
