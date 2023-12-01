/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:21:07 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/30 14:10:35 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	std::cout << "\n-----------------CORRECT-------------------" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound(); //will output the default animal soun
	delete j;
	delete i;
	delete meta;

	std::cout << "\n-------------------WRONG-------------------" << std::endl;
	const WrongAnimal *beta = new WrongAnimal();
	const WrongAnimal *x = new WrongCat();
	std::cout << x->getType() << " " << std::endl;
	x->makeSound(); //will output the cat sound!
	beta->makeSound(); //will output the dog sound!
	delete x;
	delete beta;

	return 0;
}
