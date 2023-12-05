/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:21:07 by jhusso            #+#    #+#             */
/*   Updated: 2023/12/05 12:27:47 by jhusso           ###   ########.fr       */
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

	std::cout << "meta is: " << meta->getType() << std::endl;
	std::cout << "j is: " << j->getType() << std::endl;
	std::cout << "i is: " << i->getType() << std::endl;
	meta->makeSound(); //will output the default animal soun
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	delete j;
	delete i;
	delete meta;

	std::cout << "\n-------------------WRONG-------------------" << std::endl;
	const WrongAnimal *beta = new WrongAnimal();
	const WrongAnimal *x = new WrongCat();
	std::cout << "beta is: " << beta->getType() << " " << std::endl;
	std::cout << "x is: " << x->getType() << " " << std::endl;
	beta->makeSound(); //will output the default animal sound!
	x->makeSound(); //will output the default animal sound!
	delete beta;
	delete x;
	return 0;
}
