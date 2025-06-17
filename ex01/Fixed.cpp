/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:37:30 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/15 19:35:37 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

// Default constructor
Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Constructor from int
Fixed::Fixed(const int intVal) {
    std::cout << "Int constructor called" << std::endl;
    _value = intVal << _fractionalBits; // shift left to store as fixed-point
}

// Constructor from float
Fixed::Fixed(const float floatVal) {
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(floatVal * (1 << _fractionalBits)); // multiply and round
}

// Copy constructor
Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

// Copy assignment operator
Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_value = other.getRawBits();
    }
    return *this;
}

// Destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    _value = raw;
}

// Convert to float
float Fixed::toFloat(void) const {
    return (float)_value / (1 << _fractionalBits);
}

// Convert to int
int Fixed::toInt(void) const {
    return _value >> _fractionalBits;
}

// Overload << operator
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
