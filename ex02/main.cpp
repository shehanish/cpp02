/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 20:03:13 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/15 20:43:38 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void) {
	// Default constructor
	Fixed a;
	// Multiplication and copy constructor
	Fixed const b( Fixed(5.05f) * Fixed(2) );

	// Print value of a (0)
	std::cout << a << std::endl;
	// Pre-increment a and print
	std::cout << ++a << std::endl;
	// Print value of a after pre-increment
	std::cout << a << std::endl;
	// Post-increment a and print previous value
	std::cout << a++ << std::endl;
	// Print value of a after post-increment
	std::cout << a << std::endl;
	// Print value of b
	std::cout << b << std::endl;
	// Print the maximum of a and b
	std::cout << Fixed::max(a, b) << std::endl;

    return 0;
}
