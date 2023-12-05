/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:52:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/12/05 10:36:37 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (unsigned int i = 0; i < _mCount; i ++)
		_materias[i] = nullptr;
	// std::cout << "MateriaSource's default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (unsigned int i = 0; i < _mCount; i ++)
		_materias[i] = other._materias[i];
	// std::cout << "MateriaSource's copy constructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
		return *this;
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (unsigned int i = 0; i < _mCount; i ++)
		delete _materias[i];
	// std::cout << "MateriaSource's destructor called" << std::endl;
}

/* Copies the Materia passed as a parameter and store it in
memory so it can be cloned later. Like the Character,
the MateriaSource can know at most 4 Materias.
They are not necessarily unique. */
void MateriaSource::learnMateria(AMateria *m)
{
	for (unsigned int i = 0; i < _mCount; i++)
	{
		if (_materias[i] == nullptr)
		{
			_materias[i] = m;
			std::cout << "\033[32m Learned new " << _materias[i]->getType() << "\033[0m" << std::endl;
			return;
		}
	}
}
/* Returns a new Materia. The latter is a copy of the Materia
previously learned by the MateriaSource whose type equals
the one passed as parameter. Returns 0 if the type is unknown. */
AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (unsigned int i = 0; i < _mCount; i++)
	{
		if (_materias[i] != nullptr && _materias[i]->getType() == type)
		{
			std::cout << "\033[36m Created new " << _materias[i]->getType() << "\033[0m" << std::endl;
			return _materias[i];
		}
	}
	return nullptr;
}

