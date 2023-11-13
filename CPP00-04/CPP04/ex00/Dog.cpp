/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:13:13 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/13 14:32:00 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//------Orthodox Canonical Form------
Dog::Dog() : Animal("Dog")
{
	std::cout << this->type << " Animal has been created" << std::endl;
}

Dog::Dog(Dog & src) : Animal(src)
{
	std::cout << "Copy constructed called!" << std::endl;
}

Dog &Dog::operator=(Dog const& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &obj)
	{
		type = obj.type;
	}	
  return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called!" << std::endl;
}

//-----------------------------------

std::string Dog::getType(void) const
{
	return type;
}

void	Dog::makeSound(void) const
{
		std::cout << "🐕 WOOF WOOF 🐕" << std::endl;
}