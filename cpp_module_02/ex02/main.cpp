/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhusso <jhusso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:05:06 by jhusso            #+#    #+#             */
/*   Updated: 2023/11/27 08:08:36 by jhusso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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

// 	std::cout << "fix1: " << fix1 << std::endl;
// 	std::cout << "fix2: " << fix2 << std::endl;
// 	std::cout << "fix3: " << fix3 << std::endl;
// 	std::cout << "fix4: " << fix4 << std::endl;
// 	std::cout << "fix5: " << fix5 << std::endl;

// 	// COMPARISON OPERATOR TESTS
// 	std::cout << "------------------------------------"<< std::endl;
// 	std::cout << "COMPARISON OPERATOR TESTS" << std::endl;
// 	std::cout << (fix1 < fix3) << std::endl; // true
// 	std::cout << (fix3 < fix1) << std::endl; // false
// 	std::cout << (fix1 >= fix2) << std::endl; // true
// 	std::cout << (fix1 <= fix2) << std::endl; // true
// 	std::cout << (fix1 == fix2) << std::endl; // true
// 	std::cout << (fix1 != fix1) << std::endl; // false

// 	// ARITHMETIC OPERATOR TESTS
// 	std::cout << "------------------------------------" << std::endl;
// 	std::cout << "ARITHMETIC OPERATOR TESTS" << std::endl;
// 	std::cout << "fix3 + fix5: " << fix3 + fix5 << std::endl;
// 	std::cout << "fix4 - fix5: " << fix4 - fix5 << std::endl;
// 	std::cout << "fix4 * fix5: " << fix4 * fix5 << std::endl;
// 	std::cout << "fix4 / fix5: " << fix4 / fix5 << std::endl;

// 	// INCREMENT-DECREMENT OPERATOR TESTS
// 	std::cout << "------------------------------------" << std::endl;
// 	std::cout << "INCREMENT-DECREMENT OPERATOR TESTS" << std::endl;
// 	std::cout << "pre-incremented fix4: " << ++fix4 << std::endl; //pre-increment
// 	fix5++;
// 	std::cout << "post-incremented fix5: " << fix5 << std::endl; //post-increment
// 	std::cout << "pre-decremented fix4: " << --fix4 << std::endl; //pre-decrement
// 	--fix5;
// 	std::cout << "post-decremented fix5: " << fix5 << std::endl; //post-decrement
// 	std::cout << fix5 << std::endl; //post-decrement

// 	// MAX MIN TESTS
// 	std::cout << "MAX MIN TESTS" << std::endl;
// 	std::cout << "------------------------------------" << std::endl;
// 	Fixed const fix6(15);
// 	Fixed const fix7(15.80f);
// 	std::cout << "max from fix1 and fix2: " << Fixed::max(fix1, fix3) << std::endl;
// 	std::cout << "min from fix1 and fix2: " << Fixed::min(fix1, fix3) << std::endl;
// 	std::cout << "max from fix6 and fix7: " << Fixed::max(fix6, fix7) << std::endl;
// 	std::cout << "min from fix6 and fix7: " << Fixed::min(fix6, fix7) << std::endl;

// }
