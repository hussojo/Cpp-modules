/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:21:07 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/30 07:19:16 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

int main(void)
{
	std::cout << "-----DEFAULT ANIMAL CONSTRUCTORS-----" << std::endl;
	Animal a;  // default constructor
	Animal b(a);  // copy constructor
	std::cout << "Animal a: " << a.getType() << std::endl;
	std::cout << "Animal b: " << b.getType() << std::endl;
	std::cout << "-----------DOG CONSTRUCTORS-----------" << std::endl;
	Dog c;
	Dog d(c);
	std::cout << "Dog c: " << c.getType() << std::endl;
	std::cout << "Dog d: " << d.getType() << std::endl;

}
