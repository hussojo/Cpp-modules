/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 09:38:18 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/01 09:44:04 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie::Zombie(){
	std::cout << "Constructor called!" << std::endl;
} ;

Zombie::~Zombie(){
	std::cout << "Destructor called!" << std::endl;
}

int main(void)
{
	Zombie zombie;
	

}
