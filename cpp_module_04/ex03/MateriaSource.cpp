/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:52:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/12/04 14:09:15 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < _mCount; i ++)
		_materias[i] = nullptr;
	std::cout << "MateriaSource's default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < _mCount; i ++)
		_materias[i] = other._materias[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	//WHAT
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < _mCount; i ++)
		delete _materias[i];
}

// Copies the Materia passed as a parameter and store it in
// memory so it can be cloned later. Like the Character,
// the MateriaSource can know at most 4 Materias.
// They are not necessarily unique.

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < _mCount; i++)
	{
		if (_materias[i] = nullptr)
			_materias[i] = m->clone();
	}
}
// Returns a new Materia. The latter is a copy of the Materia
// previously learned by the MateriaSource whose type equals
// the one passed as parameter.
// Returns 0 if the type is unknown.

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < _mCount; i++)
	{
		if (_materias[i] != nullptr && _materias[i]->getType() == type)
			return _materias[i];
	}
	return nullptr;
}
