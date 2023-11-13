/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:57:52 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/13 18:17:16 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include "Animal.hpp"

class WrongAnimal
{
	protected:
		std::string type;
	public:
		//------Orthodox Canonical Form------
		WrongAnimal();
		WrongAnimal(WrongAnimal & src);
		WrongAnimal &operator=(WrongAnimal const& obj);
		~WrongAnimal();
		//-----------------------------------
		WrongAnimal(std::string name);
		std::string getType(void) const;
		void makeSound(void) const;	
};


#endif