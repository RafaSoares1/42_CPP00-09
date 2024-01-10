/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:58:18 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/14 19:13:53 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
	protected:
		std::string type;
	public:
		//------Orthodox Canonical Form------
		Animal();
		Animal(Animal & src);
		Animal &operator=(Animal const& obj);
		virtual ~Animal();
		//-----------------------------------
		Animal(std::string name);
		std::string getType(void) const;
		virtual void makeSound(void) const = 0;
};




#endif