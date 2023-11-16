/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:59:21 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/15 11:16:08 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"


int main()
{
	//Animal animal; compilation error!!!!!

	{
		Cat cat;

		cat.makeSound();
	}
	std::cout << "\n" << std::endl;
	
	Animal *animal = new Dog();
	animal->makeSound();
	delete animal;
	std::cout << "\n" << std::endl;
	return 0;
}
