/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:15:53 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/13 17:26:40 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
	//------Orthodox Canonical Form------
	WrongCat();
	WrongCat(WrongCat & src);
	WrongCat &operator=(WrongCat const& obj);
	~WrongCat();
	//-----------------------------------
	std::string getType(void)const;
	void	makeSound(void)const;
};

#endif