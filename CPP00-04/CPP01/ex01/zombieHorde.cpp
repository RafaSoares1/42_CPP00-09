/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:00:07 by emsoares          #+#    #+#             */
/*   Updated: 2023/10/26 15:23:42 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombieGroup = new Zombie[N];
	for(int i = 0; i < N; i++)
		zombieGroup[i].setName(name);
	return (zombieGroup);
}
