/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:31:47 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/15 11:13:52 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//------Orthodox Canonical Form------
Cat::Cat() : Animal("Cat")
{
	std::cout << this->type << " Animal has been created" << std::endl;
	_brain = new Brain();
}

Cat::Cat(Cat & src) : Animal(src)
{
	std::cout << "Copy constructed called!" << std::endl;
	_brain = new Brain(*src._brain); //dynamically allocates memory for a new Brain object on the heap and initializes it by copying the content of the Brain object pointed to by copy._brain.
	//_brain = src._brain;   Shallow copy of the pointer
}

Cat &Cat::operator=(Cat const& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &obj)
	{
		type = obj.type;
		_brain = new Brain(*obj._brain);
	}	
  return *this;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor called!" << std::endl;
}

//-----------------------------------

std::string Cat::getType(void) const
{
	return type;
}

void	Cat::makeSound(void) const
{
	std::cout << "🐈 MIAU MIAUUUUUU 🐈" << std::endl;
}

void	Cat::getBrainCat()
{
	std::cout << "Cat brain address is: " << _brain << std::endl;
}