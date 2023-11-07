/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:06:18 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/07 17:46:32 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	{
	std::cout << "Example 1: Point inside the triangle." << std::endl;
	
		const Point	a(0, 0);
		const Point	b(5, 5);
		const Point	c(0, 10);
		const Point	point(1, 2);

		bsp(a, b, c, point);
		std::cout << "\n" << std::endl;
	}
	std::cout << "Example 2: Point outside the triangle." << std::endl;
	{
		const Point	a(0, 0);
		const Point	b(5, 5);
		const Point	c(0, 10);
		const Point	point(-1, -1);

		bsp(a, b, c, point);
		std::cout << "\n" << std::endl;
	}
	std::cout << "Example 3: Point on one of the triangle's sides." << std::endl;
	{
		const Point	a(0, 0);
		const Point	b(5, 5);
		const Point	c(0, 10);
		const Point	point(0, 5);

		bsp(a, b, c, point);
		std::cout << "\n" << std::endl;
	}
	std::cout << "Example 4: Point on one of the triangle's vertex." << std::endl;
	{
		const Point	a(0, 0);
		const Point	b(5, 5);
		const Point	c(0, 10);
		const Point	point(5, 5);

		bsp(a, b, c, point);
		std::cout << "All tests done." << std::endl;
	}
	return(0);
}
