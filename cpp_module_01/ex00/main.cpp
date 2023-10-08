/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 09:38:18 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/01 11:13:52 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie zombie("Stan of Stack");
	zombie.announce();

	Zombie *newOne = newZombie("Holly of Heap"); // creates a zombie object newOne, and assigns "Holly of Heap to it"
	newOne->announce(); // calls the announce method on the object that newOne points to
	delete newOne;

	randomChump("Ray Random");
}
