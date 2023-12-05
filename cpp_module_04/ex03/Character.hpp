/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 07:39:40 by jhusso            #+#    #+#             */
/*   Updated: 2023/12/05 09:47:10 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;
class Trash;

class Character : public ICharacter {
public:
	Character();
	Character(std::string name);
	Character(const Character& other);//copy
	Character& operator=(const Character& other);//assigment
	~Character();

	std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(unsigned int idx);
	virtual void use(unsigned int idx, ICharacter& target);

	Trash* trashHead;

private:
	std::string _name;
	static const unsigned int _slot = 4;
	AMateria *_inventory[_slot];
} ;

#endif
