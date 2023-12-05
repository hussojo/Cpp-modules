/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Trash.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 08:35:34 by jhusso            #+#    #+#             */
/*   Updated: 2023/12/05 08:57:31 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRASH_HPP
#define TRASH_HPP

#include <iostream>

class AMateria;

class Trash {
public:
	Trash(AMateria* materia);
	Trash(const Trash& other);
	Trash& operator=(const Trash& other);
	~Trash();

	AMateria* head;
	Trash* next;
} ;

#endif
