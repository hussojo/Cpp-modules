/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:21:07 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/30 12:18:20 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// int main(void)
// {
// 	std::cout << "-----------DEFAULT ANIMAL-------------" << std::endl;
// 	Animal a;  // default constructor
// 	Animal b(a);  // copy constructor
// 	std::cout << "Animal a type is: " << a.getType() << ", and it says: "  << std::endl;
// 	a.makeSound();
// 	std::cout << "Animal b type is: " << b.getType() << ", and it says: "  << std::endl;
// 	b.makeSound();

// 	std::cout << "\n------------------DOG-----------------" << std::endl;
// 	Dog c;
// 	Dog d(c);
// 	std::cout << "Dog c type is : " << c.getType() << ", and it says: " << std::endl;
// 	c.makeSound();
// 	std::cout << "Dog d type is : " << d.getType() << ", and it says: " << std::endl;
// 	c.makeSound();

// 	std::cout << "\n------------------CAT-----------------" << std::endl;
// 	Cat e;
// 	Cat f(e);
// 	std::cout << "Cat e type is : " << e.getType() << ", and it says: " << std::endl;
// 	e.makeSound();
// 	std::cout << "Cat f type is : " << f.getType() << ", and it says: " << std::endl;
// 	f.makeSound();

// 	std::cout << "\n--------------DESTRUCTING--------------" << std::endl;

// }

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound(); //will output the default animal sound
	delete j;
	delete i;
	delete meta;
	return 0;
}
