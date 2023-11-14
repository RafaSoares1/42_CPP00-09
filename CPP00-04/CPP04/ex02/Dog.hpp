/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:13:21 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/14 19:17:56 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* _brain;
	public:
		//------Orthodox Canonical Form------
		Dog();
		Dog(Dog &src);
		Dog &operator=(Dog const &obj);
		~Dog();
		//-----------------------------------
		std::string getType(void) const;
		void makeSound(void) const;
		void getBrainDog();
};

#endif