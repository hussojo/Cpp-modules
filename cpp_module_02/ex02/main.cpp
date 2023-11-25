/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:05:06 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/25 13:55:28 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
// #include <iomanip>

int main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}

// int main(void)
// {
// 	Fixed fix1; //default constructor
// 	Fixed fix2(fix1); // copy constructor
// 	Fixed fix3(42); // integer constructor
// 	Fixed fix4(42.42f); // float constructor
// 	Fixed fix5(2); // integer constructor

// 	// COMPARISON OPERATOR TESTS
// 	std::cout << "fix1: " << fix1 << std::endl;
// 	std::cout << "fix2: " << fix2 << std::endl;
// 	std::cout << "fix3: " << fix3 << std::endl;
// 	std::cout << "fix4: " << fix4 << std::endl;
// 	std::cout << "fix5: " << fix5 << std::endl;
// 	std::cout << (fix1 < fix3) << std::endl; // true
// 	std::cout << (fix3 > fix1) << std::endl; // true
// 	std::cout << (fix1 >= fix2) << std::endl; // true
// 	std::cout << (fix1 <= fix2) << std::endl; // true
// 	std::cout << (fix1 == fix2) << std::endl; // true
// 	std::cout << (fix1 != fix3) << std::endl; // true
// 	std::cout << "------------------------------------" << std::endl;

// 	// ARITHMETIC OPERATOR TESTS
// 	Fixed fix6; // default constructor
// 	fix6 = fix3 + fix5;
// 	std::cout << "fix6: " << fix6 << std::endl; //44
// 	Fixed fix7; // default constructor
// 	fix7 = fix4 - fix5;
// 	std::cout << "fix7: " << fix7 << std::endl; //40
// 	Fixed fix8; // default constructor
// 	fix8 = fix4 * fix5;
// 	std::cout << "fix8: " << fix8 << std::endl; //84
// 	Fixed fix9; // default constructor
// 	fix9 = fix4 / fix5;
// 	std::cout << "fix9: " << fix9 << std::endl; //21
// 	std::cout << "------------------------------------" << std::endl;

// }
