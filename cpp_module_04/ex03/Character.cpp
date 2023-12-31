/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 07:45:10 by jhusso            #+#    #+#             */
/*   Updated: 2023/12/05 10:58:14 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Trash.hpp"

Character::Character()
{
	_name = "";
	for (unsigned int i = 0; i < _slot; i++)
		_inventory[i] = nullptr;
	// std::cout << "Character's default constructor called" << std::endl;
}

Character::Character(std::string name)
{
	this->_name = name;
	for (unsigned int i = 0; i < _slot; i++)
		_inventory[i] = nullptr;
	std::cout << "Created new character named: " << name << std::endl;
}

Character::Character(const Character& other)
{
	this->_name = other._name;
	for (unsigned int i = 0; i < _slot; i++)
	{
		if (other._inventory[i])
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = nullptr;
	}
	// std::cout << "Character's copy constructor called" << std::endl;
}

Character& Character::operator=(const Character &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		for (unsigned int i = 0; i < _slot; i++)
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
	// std::cout << "Character destructor called" << std::endl;
}

std::string const &Character::getName() const
{
	return _name;
}

/*They equip the Materias in the first empty slot they find.
This means, in this order: from slot 0 to slot 3. In case they
try to add a Materia to a full inventory, or use/unequip an
unexisting Materia, don’t do anything (but still, bugs are forbidden).*/
void Character::equip(AMateria *m)
{
	for (unsigned int i = 0; i < _slot; i++)
	{
		if (_inventory[i] == nullptr)
		{
			_inventory[i] = m;
			std::cout << "\033[35m Equiped new " << m->getType() << "\tSLOT:" << i
			<< "\033[0m" << std::endl;
			return;
		}
	}
	std::cout << "Wasn't able to equip!" << std::endl;
}

void Character::unequip(unsigned int idx)
{
	if (idx >= 0 && idx < _slot)
	{
		Trash* unequiped = new Trash(_inventory[idx]);
		unequiped->next = trashHead;
		trashHead = unequiped;
		delete unequiped;
		std::cout << "\033[31m unequiped (" << _inventory[idx]->getType()
		<< ")\tSLOT:" << idx << "\033[0m" << std::endl;
		_inventory[idx] = nullptr;
	}
	else
	{
		std::cout << "Wasn't able to unequip!" << std::endl;
		return;
	}
}

/* The use(int, ICharacter&) member function will have to use the
Materia at the slot[idx], and pass the target parameter
to the AMateria::use function.*/
void Character::use(unsigned int idx, ICharacter &target)
{
	if (idx >= 0 && idx < _slot && _inventory[idx] != nullptr)
		_inventory[idx]->use(target);
	else
		std::cout << "\033[33m Materia index out of range \033[0m" << std::endl;
}
