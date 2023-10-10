/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 07:34:27 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/10 17:42:40 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
