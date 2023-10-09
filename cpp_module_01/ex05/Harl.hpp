/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 07:34:27 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/09 08:16:33 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "string"

class	Harl{
private:
	void	debug(void);
	// void	info(void);
	// void	warning(void);
	// void	error(void);
	static void	(*funcPointer)();
public:
	Harl();
	~Harl();
	void	complain(std::string level);
} ;
