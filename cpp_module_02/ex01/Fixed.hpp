/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:08:01 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/25 10:43:34 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed {
public:
			Fixed();
			Fixed(const Fixed& fixed);
			Fixed(const int i);
			Fixed(const float f);
			~Fixed();
	int 	getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	Fixed&	operator=(const Fixed& fixed);

private:
	int value;
	static const int bits = 8;
} ;

std::ostream&	operator<<(std::ostream& os, const Fixed& fixed);

#endif
