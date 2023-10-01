/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:57:26 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/01 15:53:43 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	std::cout << "Constructor called!" << std::endl;
	this->name = name;
}
HumanB::~HumanB()
{
	std::cout << "Destructor called!" << std::endl;
}
void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = weapon;
}

void HumanB::attack()
{
	std::cout << name << " attacks with their " << &weapon << std::endl;
}
