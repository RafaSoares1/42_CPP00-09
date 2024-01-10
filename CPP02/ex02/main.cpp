/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:06:18 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/06 16:23:28 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	min_max()
{
	Fixed a(5.6f);
	Fixed b(12);
	Fixed const c(4.2f);
	Fixed const d(1.74f);

	std::cout << ">>>>>Min_Max<<<<<\n" << std::endl;
	std::cout << "Min is: " << Fixed::min(a, b) << std::endl;
	std::cout << "Max is: " << Fixed::max(a, b) << std::endl;
	std::cout << "Min is: " << Fixed::min(c, d) << std::endl;
	std::cout << "Max is: " << Fixed::max(c, d) << std::endl;
		std::cout << "\n>>>>>Min_Max FINISH<<<<<\n" << std::endl;
}

void increment_decrement()
{
	Fixed   a(5);
  Fixed   b(2.6f);

	std::cout << ">>>>>Increment_Decrement<<<<<\n" << std::endl;
	
  std::cout << "value of a before post increment is " << a << std::endl;
  std::cout << "value of b before post increment is " << b << std::endl;
  a++;
  b++;
  std::cout << "value of a after post increment is " << a << std::endl;
  std::cout << "value of b after post increment is " << b << std::endl;
  std::cout << "-------------------------------------" << std::endl;
	
  Fixed   c(5);
  Fixed   d(2.6f);
  std::cout << "value of c before pre increment is " << c << std::endl;
  std::cout << "value of d before pre increment is " << d << std::endl;
  ++c;
  ++d;
  std::cout << "value of c after pre increment is " << c << std::endl;
  std::cout << "value of d after pre increment is " << d << std::endl;
  std::cout << "-------------------------------------" << std::endl;
	
  Fixed   e(5);
  Fixed   f(2.5f);
  std::cout << "value of e before post increment is " << e << std::endl;
  std::cout << "value of f before post increment is " << f << std::endl;
  e--;
  f--;
  std::cout << "value of e after post increment is " << e << std::endl;
  std::cout << "value of f after post increment is " << f << std::endl;
  std::cout << "-------------------------------------" << std::endl;
	
  Fixed   g(5);
  Fixed   h(2.5f);
  std::cout << "value of g before post increment is " << g << std::endl;
  std::cout << "value of h before post increment is " << h << std::endl;
  --g;
  --h;
  std::cout << "value of g after post increment is " << g << std::endl;
  std::cout << "value of h after post increment is " << h << std::endl;

	std::cout << "\n>>>>>Increment_Decrement FINISH<<<<<\n" << std::endl;
}

void	arithmetic_operators()
{
	Fixed a(Fixed(3.33f) + Fixed(4));
	Fixed b(Fixed(3.33f) - Fixed(0.33f));
	Fixed c(Fixed(2.5f) * Fixed(2.1f));
	Fixed d(Fixed(6) / Fixed(2));

	std::cout << ">>>>>Comparison Operators<<<<<\n" << std::endl;

	std::cout << "the value of a is: " << a << std::endl;
	std::cout << "the value of b is: " << b << std::endl;
	std::cout << "the value of c is: " << c << std::endl;
	std::cout << "the value of d is: " << d << std::endl;
	
	std::cout << "\n>>>>>Comparison Operators FINISH<<<<<\n" << std::endl;
}

void	comparison_operators()
{
	Fixed a(4.5f);
	Fixed b(10);
	
	std::cout << ">>>>>Comparison Operators<<<<<\n" << std::endl;
	
	std::cout << "the value of a is: " << a << std::endl;
	std::cout << "the value of b is: " << b << std::endl;

	if (a > b)
		std::cout << "a is greater than b" << std::endl;
	if (a < b)
		std::cout << "a is lower than b" << std::endl;
	if (a >= b)
		std::cout << "a is greater or equal to b" << std::endl;
	if (a <= b)
		std::cout << "a is lower or equal to b" << std::endl;
	if (a == b)
		std::cout << "a is equal to b" << std::endl;
	if (a != b)
		std::cout << "a is different than b" << std::endl;

	std::cout << "\n>>>>>Comparison Operators FINISH<<<<<\n" << std::endl;
}

int main( void ) 
{
	//comparison_operators();
	//arithmetic_operators();
	//increment_decrement();
	//min_max();
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}