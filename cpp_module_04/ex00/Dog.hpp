/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:27:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/28 10:47:14 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(std::string type);
	Dog(const Dog& other);
	// Dog& operator=(const Dog& other);
	~Dog();
} ;

#endif
