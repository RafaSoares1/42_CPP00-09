/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:06:03 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/07 17:31:56 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//---------------Constructors and destructors---------------------

Fixed::Fixed() : _fixedPoint(0)
{
	//std::cout << "Default constructor called" << std::endl; 
}

Fixed::~Fixed()
{
	//std::cout << "Default destructor called" << std::endl; 
}

Fixed::Fixed(Fixed const & src)
{
	//std::cout << "Copy constructor called" << std::endl;
	_fixedPoint = src._fixedPoint;
}

Fixed::Fixed(const int num) : _fixedPoint(num << _numberFractBits)
{
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num) : _fixedPoint(roundf(num * (1 << _numberFractBits)))
{
	//std::cout << "Float constructor called" << std::endl;
}

//----------------Member functions----------------------------

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPoint);
}

void Fixed::setRawBits( int const raw )
{
	//std::cout << "setRawBits member function called\n";
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

//------------------overload operator--------------------------

Fixed  &Fixed::operator=(Fixed const &obj)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	
	if (this != &obj)
		_fixedPoint = obj.getRawBits();	
  return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj)
{
	out << obj.toFloat();
	return out;
}

//---------------Comparison operators-----------------------

bool Fixed::operator>(const Fixed& obj) const
{
	if (this->toFloat() > obj.toFloat())
		return true;
	return false;
}

bool Fixed::operator<(const Fixed& obj) const
{
	if (this->toFloat() < obj.toFloat())
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed& obj) const
{
	if (this->toFloat() >= obj.toFloat())
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed& obj) const
{
	if (this->toFloat() <= obj.toFloat())
		return true;
	return false;
}

bool Fixed::operator==(const Fixed& obj) const
{
	if (this->toFloat() == obj.toFloat())
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed& obj) const
{
	if (this->toFloat() != obj.toFloat())
		return true;
	return false;
}

//-----------------Arithmetic Operators-------------------

Fixed	Fixed::operator+(Fixed const& obj)
{
	return Fixed(this->toFloat() + obj.toFloat());
}

Fixed	Fixed::operator-(Fixed const& obj)
{
	return Fixed(this->toFloat() - obj.toFloat());
}

Fixed	Fixed::operator/(Fixed const& obj)
{
	return Fixed(this->toFloat() / obj.toFloat());
}

Fixed	Fixed::operator*(Fixed const& obj)
{
	return Fixed(this->toFloat() * obj.toFloat());
}

//---------------Increment/decrement operators-----------
//https://www.geeksforgeeks.org/increment-and-decrement-operator-overloading-in-c/

Fixed& Fixed::operator++()
{
	++this->_fixedPoint;
	return *this;// returned value should be a reference to *this
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	this->_fixedPoint++;
	return temp;// returned value should be a copy of the object before increment
}

Fixed& Fixed::operator--()
{
	--this->_fixedPoint;
	return *this;// returned value should be a reference to *this
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	this->_fixedPoint--;
	return temp; // returned value should be a copy of the object before decrement
}

//-------------------------Min/Max--------------------------
Fixed& Fixed::min(Fixed &obj1, Fixed &obj2)
{
	if (obj1.toFloat() < obj2.toFloat())
		return obj1;
	return obj2;
}

const Fixed& Fixed::min(Fixed const& obj1, Fixed const& obj2)
{
	if (obj1.toFloat() < obj2.toFloat())
		return obj1;
	return obj2;
}

Fixed& Fixed::max(Fixed &obj1, Fixed &obj2)
{
	if (obj1.toFloat() > obj2.toFloat())
		return obj1;
	return obj2;
}

const Fixed& Fixed::max(Fixed const& obj1, Fixed const& obj2)
{
	if (obj1.toFloat() > obj2.toFloat())
		return obj1;
	return obj2;
}