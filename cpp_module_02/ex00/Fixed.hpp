/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:28:48 by jhusso            #+#    #+#             */
/*   Updated: 2023/10/21 12:05:26 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed {
public:
			Fixed();
			Fixed(const Fixed& fixed);
			~Fixed();
	Fixed&	operator=(const Fixed& fixed);
	int 	getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int value;
	static const int bits = 8;
} ;

#endif
