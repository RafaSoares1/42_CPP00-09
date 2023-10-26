/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:58:58 by emsoares          #+#    #+#             */
/*   Updated: 2023/10/26 15:51:47 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
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

void Zombie::setName(std::string given_name)
{
	name = given_name;
}
