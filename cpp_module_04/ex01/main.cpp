/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:21:07 by jhusso            #+#    #+#             */
/*   Updated: 2023/12/01 16:31:20 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
// #include "WrongCat.hpp" HOXHOXHOXHOX
// #include "WrongAnimal.hpp"

// int main()
// {
// 	std::cout << "\n-----------------CORRECT-------------------" << std::endl;
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();

// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound(); //will output the dog sound!
// 	meta->makeSound(); //will output the default animal sound
// 	delete j;
// 	delete i;
// 	delete meta;

// 	std::cout << "\n-------------------WRONG-------------------" << std::endl;
// 	const WrongAnimal *beta = new WrongAnimal();
// 	const WrongAnimal *x = new WrongCat();
// 	std::cout << x->getType() << " " << std::endl;
// 	x->makeSound(); //will output the default animal sound!
// 	beta->makeSound(); //will output the default animal sound!
// 	delete x;
// 	delete beta;

// 	return 0;
// }

int main(void)
{
	std::cout << "\n-----------------CONSTRUCT-------------------" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std:: cout << "Animal says: ";
	meta->makeSound(); //will output the default animal soun
	std::cout << j->getType() << " " << std::endl;
	std:: cout << "Dog says: ";
	j->makeSound(); //will output the dog sound
	std::cout << i->getType() << " " << std::endl;
	std:: cout << "Cat says: ";
	i->makeSound(); //will output the cat sound!
	std::cout << "\n-----------------BRAIN TEST DOG-------------------" << std::endl;
	j->setIdea(0, "BONES!");
	j->setIdea(1, "MORE BONES!");
	j->setIdea(101, "I'm not smart enough");
	std::cout << j->getIdea(0) << std::endl;
	std::cout << j->getIdea(1) << std::endl;
	std::cout << j->getIdea(101) << std::endl;
	std::cout << "\n-----------------BRAIN TEST CAT-------------------" << std::endl;
	i->setIdea(0, "FISH!");
	i->setIdea(1, "MORE FISH!");
	i->setIdea(101, "I'm not doing this");
	std::cout << i->getIdea(0) << std::endl;
	std::cout << i->getIdea(1) << std::endl;
	std::cout << i->getIdea(101) << std::endl;
	std::cout << "\n-----------------COPY TESTING-------------------" << std::endl;
	const Animal* copyD = j;
	std::cout << "Before changing: " << std::endl;
	std::cout << "original dog idea: " << j->getIdea(0) << std::endl;
	std::cout << "copy dog idea: " << copyD->getIdea(0) << std::endl;
	j->setIdea(0, "BALL!");
	std::cout << "After changing: " << std::endl;
	std::cout << "original dog idea: " << j->getIdea(0) << std::endl;
	std::cout << "copy dog idea: " << copyD->getIdea(0) << std::endl;
	std::cout << "\n-----------------DESTRUCTION-------------------" << std::endl;
	delete j;
	delete i;
	delete meta;
}
