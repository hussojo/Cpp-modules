/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 06:35:24 by jhusso            #+#    #+#             */
/*   Updated: 2023/12/04 12:56:31 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other)
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = other;
}

Cure &Cure::operator=(const Cure &other)
{
	if (this != &other)
		this->type_ = other.type_;
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

AMateria *Cure::clone() const
{
	return new Cure(*this); // using the ccopyconstructor
}
