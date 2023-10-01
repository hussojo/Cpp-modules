/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:59:19 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/01 15:59:39 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
{
	std::cout << "Constructor called!" << std::endl;
	this->name = name;
	this->weapon = Weapon;

}
HumanA::~HumanA()
{
	std::cout << "Destructor called!" << std::endl;
}
void HumanA::attack()
{
	std::cout << name << " attacks with their " << &weapon << std::endl;
}
