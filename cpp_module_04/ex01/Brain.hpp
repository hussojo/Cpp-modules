/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 06:57:41 by jhusso            #+#    #+#             */
/*   Updated: 2023/12/05 12:42:53 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
public:
	Brain();
	Brain(const std::string (&ideas)[100]);
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
	~Brain();

	std::string ideas[100];
	void setIdea(unsigned int index, std::string ideas);
	std::string getIdea(unsigned int index) const;
} ;

#endif
