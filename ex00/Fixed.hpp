/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 16:13:06 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/15 19:24:50 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int                 _value; // Stores the fixed-point value
    static const int    _fractionalBits = 8; // Number of fractional bits (always 8)

public:
    Fixed();                                // Default constructor
    Fixed(const Fixed& other);              // Copy constructor
    Fixed& operator=(const Fixed& other);   // Copy assignment
    ~Fixed();                               // Destructor

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
