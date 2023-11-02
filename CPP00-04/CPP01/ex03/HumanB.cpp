/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:15:29 by emsoares          #+#    #+#             */
/*   Updated: 2023/10/31 11:04:21 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB() : _name("NO_NAME"), _weapon(NULL){}

HumanB::HumanB(std::string name) : _name(name){}

HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon& weapon) //&-> pass an object by reference, otherwise any changes made to weapon inside the function would not affect the original Weapon object
{
	_weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
