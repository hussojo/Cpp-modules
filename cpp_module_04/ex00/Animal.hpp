/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:12:49 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/30 09:10:09 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
public:
	Animal();
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
	~Animal();

	virtual std::string makeSound() const; // virtual??
	std::string getType(void) const;

protected:
	std::string type_;
} ;



#endif
