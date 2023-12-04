/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 07:39:40 by jhusso            #+#    #+#             */
/*   Updated: 2023/12/04 11:42:34 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class Character : public ICharacter {
public:
	Character();
	Character(std::string name);
	Character(const Character& other);//copy
	Character& operator=(const Character& other);//assigment
	~Character();

	std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

private:
	std::string name_;
	static int const slot_ = 4;
	std::string inventory[slot_];
} ;

#endif