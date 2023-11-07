/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:54:24 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/07 17:26:14 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed _x;
		const Fixed _y;
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point& src);
		~Point();
		Point& operator=(const Point &obj);
		Fixed getX() const;
		Fixed getY() const;
};
Fixed triangle_area(Point const a, Point const b, Point const c);
bool bsp( Point const& a, Point const& b, Point const& c, Point const& point);

#endif