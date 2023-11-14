/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:08:47 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/13 17:26:14 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//------Orthodox Canonical Form------
WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << this->type << " Animal has been created" << std::endl;
}

WrongCat::WrongCat(WrongCat & src) : WrongAnimal(src)
{
	std::cout << "Copy constructed called!" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &obj)
	{
		type = obj.type;
	}	
  return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called!" << std::endl;
}

//-----------------------------------

std::string WrongCat::getType(void) const
{
	return type;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat Sound!" << std::endl;
}