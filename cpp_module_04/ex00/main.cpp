/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:21:07 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/30 09:10:57 by jhusso           ###   ########.fr       */
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
// 	std::cout << "Animal a type is: " << a.getType() << ", and it says: " <<
// 	a.makeSound() << std::endl;
// 	std::cout << "Animal b type is: " << b.getType() << ", and it says: " <<
// 	b.makeSound() << std::endl;

// 	std::cout << "\n------------------DOG-----------------" << std::endl;
// 	Dog c;
// 	Dog d(c);
// 	std::cout << "Dog c type is : " << c.getType() << ", and it says: " <<
// 	c.makeSound() << std::endl;
// 	std::cout << "Dog d type is : " << d.getType() << ", and it says: " <<
// 	c.makeSound() << std::endl;

// 	std::cout << "\n------------------CAT-----------------" << std::endl;
// 	Cat e;
// 	Cat f(e);
// 	std::cout << "Cat e type is : " << e.getType() << ", and it says: " <<
// 	e.makeSound() << std::endl;
// 	std::cout << "Cat f type is : " << f.getType() << ", and it says: " <<
// 	f.makeSound() << std::endl;

// 	std::cout << "\n--------------DESTRUCTING--------------" << std::endl;

// }

int main() {
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound! j->makeSound();
meta->makeSound();
return 0; }
