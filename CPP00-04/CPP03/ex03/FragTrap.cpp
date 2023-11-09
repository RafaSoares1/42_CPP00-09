/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:17:16 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/09 16:44:53 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << _name << " FragTrap 🤖 has been created!" << std::endl;
	_healthPoints = 100;
	_energy	= 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << _name << " FragTrap 🤖 has been created!" << std::endl;
	_healthPoints = 100;
	_energy	= 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap &src) : ClapTrap(src){
	std::cout << "FragTrap Copy constructed called!" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &obj)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	
	if (this != &obj)
	{
		_name = obj._name;
		_healthPoints = obj._healthPoints;
		_energy = obj._energy;
		_attackDamage = obj._attackDamage;
	}	
  return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destructor called!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "🙌 High Five 🙌" << std::endl;
}