/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 07:01:24 by jhusso            #+#    #+#             */
/*   Updated: 2023/12/02 09:17:33 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() // default constructor
{
	for (int i = 0; i < 100; i++)
		ideas[i] = "";
	std::cout << "Brain has been constructed" << std::endl;
}

Brain::Brain(const std::string (&ideas)[100]) //paramethrisized constructor
{
	std::copy(std::begin(ideas), std::end(ideas), std::begin(this->ideas));
	std::cout << "Brain has been constructed with 100 ideas! \
	(Paramethrisized constructor)" << std::endl;
}

Brain::Brain(const Brain &other) // copy constructor
{
	std::copy(std::begin(other.ideas), std::end(other.ideas), std::begin(this->ideas));
	std::cout << "Brain copy constructor has been called" << std::endl;
}

Brain& Brain::operator=(const Brain &other)
{
	std::copy(std::begin(other.ideas), std::end(other.ideas), std::begin(this->ideas));
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain has been destructed" << std::endl;
}


void Brain::setIdea(unsigned int index, std::string idea)
{
	if (index >= 0 && index < 100)
	{
		std::string("").swap(ideas[index]);
		ideas[index] = idea;
	}
	else
		std::cout << "Brain not big enough! (Index out of range)" << std::endl;
}

std::string Brain::getIdea(unsigned int index) const
{

	if (index >= 0 && index < 100)
		return ideas[index];
	else
	{
		std::cout << "Idea not in brain! (Index out of range)" << std::endl;
		return "";
	}
}
