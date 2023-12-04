/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 07:45:10 by jhusso            #+#    #+#             */
/*   Updated: 2023/12/04 11:41:23 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	name_ = "";
	for (int i = 0; i < slot_; i++)
		inventory[i] = "";
	std::cout << "Character's default constructor called" << std::endl;
}

Character::Character(std::string name)
{
	this->name_ = name;
	std::cout << "Character's parameterisized constructor called" << std::endl;
}

Character::Character(const Character& other)
{
	this->name_ = other.name_;
	for (int i = 0; i < slot_; i++)
		this->inventory[i] = other.inventory[i];
	std::cout << "Character's copy constructor called" << std::endl;
}

Character& Character::operator=(const Character &other)
{
	this->name_ = other.name_;
	for (int i = 0; i < slot_; i++)
		this->inventory[i] = other.inventory[i];
	return *this;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
}

std::string const &Character::getName() const
{
	return name_;
}

void Character::equip(AMateria *m)
{
}

void Character::unequip(int idx)
{
}

void Character::use(int idx, ICharacter &target)
{
}
