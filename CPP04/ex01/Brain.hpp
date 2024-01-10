/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emsoares <emsoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:05:01 by emsoares          #+#    #+#             */
/*   Updated: 2023/11/14 12:31:09 by emsoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain();
		Brain(Brain & src);
		Brain &operator=(Brain const& obj);
		~Brain();
};

#endif
