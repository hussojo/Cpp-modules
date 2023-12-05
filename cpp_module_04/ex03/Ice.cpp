/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 06:35:28 by jhusso            #+#    #+#             */
/*   Updated: 2023/12/05 10:28:33 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	// std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other)
{
	// std::cout << "Ice copy constructor called" << std::endl;
	*this = other;
}

Ice &Ice::operator=(const Ice &other)
{
	if (this != &other)
		this->type_ = other.type_;
	return *this;
}

Ice::~Ice()
{
	// std::cout << "Ice destructor called" << std::endl;
}

AMateria *Ice::clone() const
{
	// std::cout << "Ice clone() called" << std::endl;
	return new Ice(*this);
}
