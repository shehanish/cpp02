/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 16:13:31 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/15 17:10:44 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) 
{

	// Fixed a;
    // a.setRawBits(3.75 * 256);
    // std::cout << "Raw bits for 3.75: " << a.getRawBits() << std::endl;

    // Fixed b;
    // b.setRawBits(0.5 * 256);
    // std::cout << "Raw bits for 0.5: " << b.getRawBits() << std::endl;

    // Fixed c;
    // c.setRawBits(-2.125 * 256);
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;

	std::cout << "a: " << a.getRawBits() << std::endl << std::endl;
	std::cout << "b: " << b.getRawBits() << std::endl << std::endl;
	std::cout << "c: " << c.getRawBits() << std::endl << std::endl;

	return 0;
}
