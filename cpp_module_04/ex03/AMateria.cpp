/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 12:12:41 by jhusso            #+#    #+#             */
/*   Updated: 2023/12/05 10:43:11 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	// std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : type_(type)
{
	// std::cout << "AMateria parameterisized constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
	// std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other)
		this->type_ = other.getType();
	return *this;
}

AMateria::~AMateria()
{
	// std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
	return type_;
}

void AMateria::use(ICharacter &target)
{
	if (this->getType() == "ice")
		std::cout << "\033[33m * shoots an ice bolt at " << target.getName() << " * \033[0m" << std::endl;
	if (this->getType() == "cure")
		std::cout << "\033[33m * heals " << target.getName() << "'s wounds * \033[0m" << std::endl;
	else
		return;
}

