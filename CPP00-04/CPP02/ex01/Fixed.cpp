/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:06:03 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/06 12:31:19 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl; 
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl; 
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	_fixedPoint = src._fixedPoint;
}

Fixed::Fixed(const int num) : _fixedPoint(num << _numberFractBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num) : _fixedPoint(roundf(num * (1 << _numberFractBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed  &Fixed::operator=(Fixed const &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &obj)
		_fixedPoint = obj.getRawBits();	
  return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPoint);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called\n";
	_fixedPoint = raw;
}

int Fixed::toInt(void) const
{
	return (_fixedPoint >> _numberFractBits);	
}

float Fixed::toFloat(void) const
{
	float value = static_cast<float>(_fixedPoint) / (1 << _numberFractBits);
	return value;
}

std::ostream& operator<<(std::ostream& out, Fixed const & obj)
{
	out << obj.toFloat();
	return out;
}
