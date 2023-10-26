/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:59:11 by emsoares          #+#    #+#             */
/*   Updated: 2023/10/26 16:05:48 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>
#include <string>
#include <cstdlib>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void setName(std::string given_name);
};

Zombie* zombieHorde( int N, std::string name );

#endif