/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:06:12 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/06 16:14:33 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed{
	private:
		int	_fixedPoint;
		static const int _numberFractBits = 8;
	public:
		//Constructors and destructors
		Fixed(); //default constructor
		~Fixed(); //destructor
		Fixed(Fixed const & src); //copy constructor
		Fixed(const int num);
		Fixed(const float num);
		
		//member function
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float	toFloat(void) const;
		int	toInt(void) const;
		
		//overload operator
		Fixed & operator=(Fixed const & obj); //assignment operator overload
		
		//comparison operators
		bool operator>(Fixed const& obj) const;
		bool operator<(Fixed const& obj) const;
		bool operator>=(Fixed const& obj) const;
		bool operator<=(Fixed const& obj) const;
		bool operator==(Fixed const& obj) const;
		bool operator!=(Fixed const& obj) const;

		//arithmetic operators
		Fixed operator+(Fixed const& obj);
		Fixed operator-(Fixed const& obj);
		Fixed operator/(Fixed const& obj);
		Fixed operator*(Fixed const& obj);
		
		//Increment/decrement operators
		Fixed& operator++();//++i
		Fixed operator++(int); //i++
		Fixed& operator--();//--i
		Fixed operator--(int); //i--

		//Min/Max
		static Fixed& min(Fixed &obj1, Fixed &obj2);
		static const Fixed& min(Fixed const& obj1, Fixed const& obj2);
		static Fixed& max(Fixed &obj1, Fixed &obj2);
		static const Fixed& max(Fixed const& obj1, Fixed const& obj2);
};
std::ostream& operator<<(std::ostream& out, const Fixed& obj);

#endif