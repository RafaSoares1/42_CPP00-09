/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:04:51 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/14 15:21:48 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called." << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "Default idea !";
}

Brain::Brain(Brain & src)
{
	std::cout << "Brain Copy constructor called!" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = src._ideas[i];
}

Brain &Brain::operator=(Brain const &obj)
{
	std::cout << "Brain overload operator = called" << std::endl;
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = obj._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called!" << std::endl;
}

