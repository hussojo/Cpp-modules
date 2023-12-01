/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 07:01:24 by jhusso            #+#    #+#             */
/*   Updated: 2023/12/01 07:05:46 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain has been constructed" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor has been called" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	// TODO: insert return statement here
}

Brain::~Brain()
{
	std::cout << "Brain has been destructed" << std::endl;
}
