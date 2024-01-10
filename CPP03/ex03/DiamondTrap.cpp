/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:14:48 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/10 12:32:33 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), _name("Default")
{
    std::cout << _name << " DiamondTrap 💎 has been created!" << std::endl;
    _healthPoints = FragTrap::_healthPoints;
    _energy = 50;
    _attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name" ), _name(name)
{
    std::cout << _name << " DiamondTrap 💎 has been created!" << std::endl;
    _healthPoints = FragTrap::_healthPoints;
    _energy = 50;
    _attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap &src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << "DiamondTrap Copy constructed called!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &obj)
{
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	
	if (this != &obj)
	{
		_name = obj._name;
		_healthPoints = obj._healthPoints;
		_energy = obj._energy;
		_attackDamage = obj._attackDamage;
	}	
  return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap 💎 " << _name << " destructor called!" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap 💎 name is: " << _name << std::endl;
    std::cout << "ClapTrap 🤖 name is: " << ClapTrap::_name << std::endl;
}

int DiamondTrap::getAD()
{
    return _attackDamage;
}

int DiamondTrap::getHP()
{
    return _healthPoints;
}

int DiamondTrap::getEP()
{
    return _energy;
}
