/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:31:57 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/14 19:18:00 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* _brain;
	public:
	//------Orthodox Canonical Form------
	Cat();
	Cat(Cat & src);
	Cat &operator=(Cat const& obj);
	~Cat();
	//-----------------------------------
	std::string getType(void)const;
	void	makeSound(void)const;
	void	getBrainCat();
};

#endif