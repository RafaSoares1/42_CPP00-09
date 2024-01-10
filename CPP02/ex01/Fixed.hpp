/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:06:12 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/06 12:31:04 by emsoares         ###   ########.fr       */
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
		Fixed(); //default constructor
		~Fixed(); //destructor
		Fixed(Fixed const & src); //copy constructor
		Fixed(const int num);
		Fixed(const float num);
		float	toFloat(void) const;
		int	toInt(void) const;
		Fixed & operator=(Fixed const & obj); //assignment operator overload
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& out, Fixed const & obj);

#endif