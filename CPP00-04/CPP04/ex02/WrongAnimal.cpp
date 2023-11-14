/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:57:29 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/14 11:01:44 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Default")
{
	std::cout << this->type << " Animal has been created" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal & src) : type(src.type)
{
	std::cout << "Copy constructed called!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &obj)
	{
		type = obj.type;
	}	
  return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal " << type << " destructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) : type(name)
{
	std::cout << "WrongAnimal has been created(Parent)" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "No sound for default WrongAnimal!" << std::endl;
}

