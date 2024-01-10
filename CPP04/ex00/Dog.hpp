/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:13:21 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/13 13:01:20 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal
{
public:
	//------Orthodox Canonical Form------
	Dog();
	Dog(Dog &src);
	Dog &operator=(Dog const &obj);
	~Dog();
	//-----------------------------------
	std::string getType(void) const;
	void makeSound(void) const;
};

#endif