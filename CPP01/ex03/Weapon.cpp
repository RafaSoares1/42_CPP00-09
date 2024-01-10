/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:08:29 by emsoares          #+#    #+#             */
/*   Updated: 2023/10/30 14:56:04 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) : _type("Generic"){}

Weapon::Weapon(std::string type) : _type(type){}

Weapon::~Weapon(){}

const std::string& Weapon::getType()
{
	return _type;
}
void	Weapon::setType(std::string type)
{
	_type = type;
}
