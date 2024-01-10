/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:31:57 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/13 13:01:29 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
	//------Orthodox Canonical Form------
	Cat();
	Cat(Cat & src);
	Cat &operator=(Cat const& obj);
	~Cat();
	//-----------------------------------
	std::string getType(void)const;
	void	makeSound(void)const;
};

#endif