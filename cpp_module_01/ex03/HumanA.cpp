/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:59:19 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/08 15:25:04 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// HumanA::HumanA(std::string name, Weapon& weapon)
// {
// 	this->name = name;
// 	this->weapon = weapon;
//initialization of a referencd variable can not be made in the
// function body but must be made as an initialization list
// }

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
	std::cout << "HumanA constructor called!" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA destructor called!" << std::endl;
}
void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
