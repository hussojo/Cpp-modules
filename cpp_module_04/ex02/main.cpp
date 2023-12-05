/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:21:07 by jhusso            #+#    #+#             */
/*   Updated: 2023/12/05 13:08:38 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
	//trying to make an object straight from animal class
	// Animal animal;
	// Animal* animal = new Animal;
	std::cout << "\033[1;32m\n------------------CONSTRUCT HERD-------------------\033[0m" << std::endl;
	// create and fill an array of Animal objects, half dogs half cats
	Animal* herd[6];
	for (int i = 0; i < 6; i++)
	{
		std::cout << "\033[1;34m---------- constructing animal nbr: " << i << " ----------\033[0m"<< std::endl;
		if (i % 2)
			herd[i] = new Dog;
		else
			herd[i] = new Cat;
	}

	std::cout << "\033[1;32m\n-----------------DESTRUCT HERD-----------------\033[0m" << std::endl;
	// loop over the array and delete every Animal
	for (int i = 0; i < 6; i++)
		delete herd[i];

	std::cout << "\033[1;32m\n---------------DEEP COPY TESTING------------------\033[0m" << std::endl;

	std::cout << "\033[1;34m------------------ cat to heap ---------------------\033[0m"<< std::endl;
	Cat* cat1 = new Cat;
	cat1->getBrain().setIdea(0, "This is cat1 first idea");
	Cat* Copycat = new Cat(*cat1);
	// Cat* Copycat = new Cat;
	// *Copycat = *cat1;
	Copycat->getBrain().setIdea(0, "This is Copycat first idea");
	std::cout << "\033[95m Before tempering with thoughts \033[0m " << std::endl;
	std::cout << "cat1 thought:		" << cat1->getBrain().getIdea(0) << std::endl;
	std::cout << "Copycat thought:	" << Copycat->getBrain().getIdea(0) << std::endl;
	cat1->getBrain().setIdea(0, "This is cat1 second idea");
	std::cout << "\033[95m After tempering with thoughts \033[0m " << std::endl;
	std::cout << "cat1 thought:		" << cat1->getBrain().getIdea(0) << std::endl;
	std::cout << "Copycat thought:	" << Copycat->getBrain().getIdea(0) << std::endl;
	delete cat1;
	delete Copycat;

	std::cout << "\033[1;34m----------------- dog to stack ---------------------\033[0m"<< std::endl;
	Dog dog1;
	dog1.getBrain().setIdea(0, "This is dog1 first idea");
	Dog Copydog(dog1);
	// Dog Copydog = dog1;
	Copydog.getBrain().setIdea(0, "This is Copydog first idea");
	std::cout << "\033[95m Before tempering with thoughts \033[0m " << std::endl;
	std::cout << "dog1 thought:		" << dog1.getBrain().getIdea(0) << std::endl;
	std::cout << "Copydog thought:	" << Copydog.getBrain().getIdea(0) << std::endl;
	dog1.getBrain().setIdea(0, "This is dog1 second idea");
	std::cout << "\033[95m After tempering with thoughts \033[0m " << std::endl;
	std::cout << "dog1 thought:		" << dog1.getBrain().getIdea(0) << std::endl;
	std::cout << "Copydog thought:	" << Copydog.getBrain().getIdea(0) << std::endl;
	// SUBJECT EXAMPLE TEST
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// delete j; //should not create a leak
	// delete i;

	std::cout << "\033[1;32m\n-------------------dog destruction--------------------\033[0m" << std::endl;
}
