/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:58:22 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/14 10:58:33 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Default")
{
	std::cout << this->type << " Animal has been created" << std::endl;
}

Animal::Animal(Animal & src) : type(src.type)
{
	std::cout << "Copy constructed called!" << std::endl;
}

Animal &Animal::operator=(Animal const& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &obj)
	{
		type = obj.type;
	}	
  return *this;
}

Animal::~Animal()
{
	std::cout << "Animal " << type << " destructor called!" << std::endl;
}

Animal::Animal(std::string name) : type(name)
{
	std::cout << this->type << " Animal has been created(Parent)" << std::endl;
}

std::string Animal::getType(void) const
{
	return type;
}

void	Animal::makeSound(void) const
{
	std::cout << "No sound for default Animal!" << std::endl;
}