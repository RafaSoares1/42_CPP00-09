/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:31:47 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/13 13:01:35 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


//------Orthodox Canonical Form------
Cat::Cat() : Animal("Cat")
{
	std::cout << this->type << " Animal has been created" << std::endl;
}

Cat::Cat(Cat & src) : Animal(src)
{
	std::cout << "Copy constructed called!" << std::endl;
}

Cat &Cat::operator=(Cat const& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &obj)
	{
		type = obj.type;
	}	
  return *this;
}

Cat::~Cat()
{
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