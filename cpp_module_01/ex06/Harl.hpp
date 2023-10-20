/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 07:34:27 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/20 10:06:52 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include "iostream"
#include "string"

class	Harl {
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	typedef void(Harl::*funcPointer)(void);
	funcPointer funcArr[4];
public:
	Harl();
	~Harl();
	void	complain(std::string level);

} ;

void	give_instructions();

#endif
