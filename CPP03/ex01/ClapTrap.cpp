/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:36:11 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/08 14:36:11 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default") , _healthPoints(10), _energy(10), _attackDamage(0)
{
	std::cout << this->_name << " 🤖 has been created!" << std::endl; 
}

ClapTrap::ClapTrap(std::string name) : _name(name), _healthPoints(10), _energy(10), _attackDamage(0)
{
	std::cout << this->_name << " 🤖 has been created!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap & src) : _name(src._name), _healthPoints(src._healthPoints), _energy(src._energy), _attackDamage(src._attackDamage)
{
	std::cout << "Copy constructed called!" << std::endl;
}

ClapTrap  &ClapTrap::operator=(ClapTrap const &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &obj)
	{
		_name = obj._name;
		_healthPoints = obj._healthPoints;
		_energy = obj._energy;
		_attackDamage = obj._attackDamage;
	}	
  return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destructor called!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_healthPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
		return;
	}
	if (_energy > 0)
	{
		std::cout << "ClapTrap attacks " << target << " , causing " << _attackDamage << " points of damage!" << std::endl;
		_energy -=1;
		return;
	}
	std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (_healthPoints > amount)
	{
		std::cout << "ClapTrap " << _name << " takes " << amount << " damage!" << std::endl;
		_healthPoints -= amount;
		return;
	}
	std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_healthPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
		return;
	}
	if (_energy > 0)
	{
		std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points!" << std::endl;
    _energy -= 1;
    _healthPoints += amount;
		return;
	}
	std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
}