/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:10:58 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/07 17:45:41 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	area(Point const a, Point const b, Point const c)
{
	Fixed	area;

	area = (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2;
	return(std::abs(area.toFloat()));
}

bool bsp( Point const& a, Point const& b, Point const& c, Point const& point)
{
	Fixed	totalArea = area(a, b, c);
	if(totalArea <= 0)
	{
		std::cout << "Invalid triangle area." << std::endl;
		return(false);
	}
	Fixed	subAreaA = area(point, a, c);
	Fixed	subAreaB = area(point, c, b);
	Fixed	subAreaC = area(point, b, a);

	Fixed	d = subAreaA / totalArea;
	Fixed	e = subAreaB / totalArea;
	Fixed	f = subAreaC / totalArea;
	if(d > 0 && d < 1 && e > 0 && e < 1 && f > 0 && f < 1)
	{
		std::cout << "The point is \033[1;32minside\033[0m the triangle." << std::endl;
		return(true);
	}
	else if(d == 0 || d == 1 || e == 0 || e == 1 || f == 0 || f == 1)
	{
		std::cout << "The point is \033[1;31mnot\033[0m inside the triangle." << std::endl;
		return(false);
	}
	return(false);
}