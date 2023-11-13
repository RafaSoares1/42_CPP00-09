/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:59:21 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/13 18:23:43 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "--------------- Animal ---------------" << std::endl;
	
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete meta;
	
	std::cout << "------------Wrong Animal ------------" << std::endl;
	

	const WrongAnimal *wrongAni = new WrongAnimal();
  const WrongAnimal *wrongCat = new WrongCat();

	std::cout << wrongAni->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	
	wrongAni->makeSound();
	wrongCat->makeSound();
	
	delete wrongAni;
	delete wrongCat;
}