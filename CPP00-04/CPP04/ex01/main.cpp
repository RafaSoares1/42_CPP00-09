/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 11:59:21 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/14 19:16:32 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

	/* const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i; */

void	check_copy()
{
	std::cout << "\n-----------Check Copy-----------" << std::endl;

	Dog *dog = new Dog();
	Dog *dog2 = new Dog(*dog);
	
	std::cout << "\nDog address: " << dog << std::endl;
	dog->getBrainDog();
	delete dog;

	std::cout << "\nDog2 address: " << dog2 << std::endl;
	dog2->getBrainDog();
	delete dog2;
	std::cout << "\n-----------Check Copy FINISH-----------" << std::endl;
}
int main()
{

	Animal *animal[4];

	for (int i = 0; i < 2; i++)
		animal[i] = new Dog();
	for (int i = 2; i < 4; i++)
		animal[i] = new Cat();
	check_copy();
	
/* 	for(int i = 0; i < 2; i++)
	{
		std::cout << animal[i]->getType() << " is the type, ";
		std::cout << animal[i] << " is the address of the animal array obj!" << std::endl; //endereco
		Dog *dog(dynamic_cast<Dog*>(animal[i]));
		dog->getBrainDog();
	}
	for(int i = 2; i < 4; i++)
	{
		std::cout << animal[i]->getType() << " is the type, ";
		std::cout << animal[i] << " is the address of the animal array obj!" << std::endl; //endereco
		Cat *cat(dynamic_cast<Cat*>(animal[i]));
		cat->getBrainCat();
	} */
	
	for (int i = 0; i < 4; i++)
		delete animal[i];
	return 0;
}

/* * 
If the dynamic cast is successful (meaning that animal[i] actually points to a Dog object or a derived class of Dog),
then dog will point to the valid object, and you can use it accordingly. However, it does not involve calling the copy constructor.
The copy constructor is only called when you create a new object (for example, when using the new operator or when passing by value). */

