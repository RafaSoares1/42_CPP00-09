/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:01:55 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/07 17:32:20 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0){}

Point::Point(const float x, const float y) : _x(x), _y(y){}

Point::Point(const Point& src) : _x(src._x), _y(src._y) {}

Point::~Point()
{
	
}

Point& Point::operator=(const Point &obj)
{
	if (this != &obj)
	{
		(Fixed)_x = obj._x;
		(Fixed)_y = obj._y;
	}
	return *this;
}

Fixed Point::getX() const
{
	return (this->_x);
}

Fixed Point::getY() const
{
	return (this->_y);
}