/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:37:35 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/15 19:35:40 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int _value;                 // Raw fixed-point value
    static const int _fractionalBits = 8;  // Number of fractional bits

public:
    Fixed();                    // Default constructor
    Fixed(const int intVal);    // Constructor from int
    Fixed(const float floatVal);// Constructor from float
    Fixed(const Fixed& other);  // Copy constructor
    Fixed& operator=(const Fixed& other); // Copy assignment operator
    ~Fixed();                   // Destructor

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;  // Convert fixed-point to float
    int toInt(void) const;      // Convert fixed-point to int
};

// Overload insertion operator (<<) for outputting Fixed objects
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
