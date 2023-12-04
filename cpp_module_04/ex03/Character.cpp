/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 07:45:10 by jhusso            #+#    #+#             */
/*   Updated: 2023/12/04 12:57:19 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	_name = "";
	for (int i = 0; i < _slot; i++)
		_inventory[i] = nullptr;
	std::cout << "Character's default constructor called" << std::endl;
}

Character::Character(std::string name)
{
	this->_name = name;
	for (int i = 0; i < _slot; i++)
		_inventory[i] = nullptr;
	std::cout << "Character's parameterisized constructor called" << std::endl;
}

Character::Character(const Character& other)
{
	this->_name = other._name;
	for (int i = 0; i < _slot; i++)
	{
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = nullptr;
	}
	std::cout << "Character's copy constructor called" << std::endl;
}

Character& Character::operator=(const Character &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		for (int i = 0; i < _slot; i++)
		{
			delete _inventory[i];
			if (other._inventory[i])
				_inventory[i] = other._inventory[i]->clone();
			else
				_inventory[i] = nullptr;
		}
	}
	return *this;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
}

std::string const &Character::getName() const
{
	return _name;
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
