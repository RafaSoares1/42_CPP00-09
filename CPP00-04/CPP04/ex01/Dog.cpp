/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:13:13 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/14 15:53:00 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//------Orthodox Canonical Form------
Dog::Dog() : Animal("Dog")
{
	std::cout << this->type << " Animal has been created" << std::endl;
	_brain = new Brain();
}

Dog::Dog(Dog & src) : Animal(src)
{
	std::cout << "Copy constructed called!" << std::endl;
	_brain = new Brain(*src._brain); //dynamically allocates memory for a new Brain object on the heap and initializes it by copying the content of the Brain object pointed to by copy._brain.
	//_brain = src._brain;   Shallow copy of the pointer
}

Dog &Dog::operator=(Dog const& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &obj)
	{
		type = obj.type;
		_brain = new Brain(*obj._brain);
	}	
  return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called!" << std::endl;
	delete _brain;
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

void	Dog::getBrainDog()
{
	std::cout << "Dog brain address is: " << _brain << std::endl;
}
