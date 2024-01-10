/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:06:51 by emsoares          #+#    #+#             */
/*   Updated: 2023/10/30 15:31:08 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
{
Weapon club("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType("samurai sword");
bob.attack();
}
{
Weapon club("crude spiked club2");
HumanB jim("Jim");
jim.setWeapon(club);
jim.attack();
club.setType("ninja sword");
jim.attack();
}
return 0;
}
