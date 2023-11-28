/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:27:25 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/28 10:38:33 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal {
public:
	Dog();
	Dog(std::string type);
	Dog(const Dog& other);
	Dog& operator=(const Dog& other);
	~Dog();
} ;

#endif
