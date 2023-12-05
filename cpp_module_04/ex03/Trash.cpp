/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Trash.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 09:34:54 by jhusso            #+#    #+#             */
/*   Updated: 2023/12/05 09:45:16 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Trash.hpp"

Trash::Trash(AMateria* materia) : head(materia), next(nullptr)
{
	std::cout << "Trash default constructor called" << std::endl;
}

Trash::Trash(const Trash &other) : head(other.head), next(other.next)
{
	std::cout << "Trash copy constructor called" << std::endl;
}

Trash &Trash::operator=(const Trash &other)
{
	this->head = other.head;
	this->next = other.next;
	return *this;
}

Trash::~Trash()
{
	std::cout << "Trash destructor called" << std::endl;
}
