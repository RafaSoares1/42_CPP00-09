/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:57:17 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/10 12:40:08 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << _name << " ScavTrap 🤖 has been created!" << std::endl;
	_healthPoints = 100;
	_energy	= 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << _name << " ScavTrap 🤖 has been created!" << std::endl;
	_healthPoints = 100;
	_energy	= 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap &src) : ClapTrap(src){
	std::cout << "ScavTrap Copy constructed called!" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &obj)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	
	if (this != &obj)
	{
		_name = obj._name;
		_healthPoints = obj._healthPoints;
		_energy = obj._energy;
		_attackDamage = obj._attackDamage;
	}	
  return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destructor called!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << "is now in Gate keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_healthPoints <= 0)
	{
		std::cout << "ScavTrap " << _name << " is dead!" << std::endl;
		return;
	}
	if (_energy > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << " , causing " << _attackDamage << " points of damage!" << std::endl;
		_energy -=1;
		return;
	}
	std::cout << "ScavTrap " << _name << " is out of energy!" << std::endl;
}
