/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 09:38:18 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/19 16:04:59 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie zombie("Stan of Stack");
	zombie.announce();

	Zombie *newOne = newZombie("Holly of Heap");
	newOne->announce();
	delete newOne;

	randomChump("Ray Random");
}
