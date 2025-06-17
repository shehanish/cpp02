/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 20:03:51 by shkaruna          #+#    #+#             */
/*   Updated: 2025/06/15 21:18:34 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors and destructor
Fixed::Fixed() : _value(0) {}

Fixed::Fixed(const int intVal) {
    _value = intVal << _fractionalBits;
}

Fixed::Fixed(const float floatVal) {
    _value = roundf(floatVal * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& other) {
    _value = other._value;
}

Fixed::~Fixed() {}

// Assignment operator
Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other)
        _value = other._value;
    return *this;
}

// Comparison operators
bool Fixed::operator>(const Fixed& other) const {
    return _value > other._value;
}

bool Fixed::operator<(const Fixed& other) const {
    return _value < other._value;
}

bool Fixed::operator>=(const Fixed& other) const {
    return _value >= other._value;
}

bool Fixed::operator<=(const Fixed& other) const {
    return _value <= other._value;
}

bool Fixed::operator==(const Fixed& other) const {
    return _value == other._value;
}

bool Fixed::operator!=(const Fixed& other) const {
    return _value != other._value;
}

// Arithmetic operators
Fixed Fixed::operator+(const Fixed& other) const {
    Fixed result;
    result._value = _value + other._value;
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const {
    Fixed result;
    result._value = _value - other._value;
    return result;
}

Fixed Fixed::operator*(const Fixed& other) const {
    Fixed result;
    // Multiply and shift back by fractional bits
    long long mul = (long long)_value * other._value;
    result._value = (int)(mul >> _fractionalBits);
    return result;
}

Fixed Fixed::operator/(const Fixed& other) const {
    Fixed result;
    // Division with scaling to maintain precision
    if (other._value == 0) {
        std::cerr << "Error: Division by zero" << std::endl;
        exit(1);
    }
    long long div = ((long long)_value << _fractionalBits) / other._value;
    result._value = (int)div;
    return result;
}

// Increment / Decrement operators

// pre-increment
Fixed& Fixed::operator++() {
    ++_value;
    return *this;
}

// post-increment
Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    ++_value;
    return temp;
}

// pre-decrement
Fixed& Fixed::operator--() {
    --_value;
    return *this;
}

// post-decrement
Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    --_value;
    return temp;
}

// Getters and setters
int Fixed::getRawBits(void) const {
    return _value;
}

void Fixed::setRawBits(int const raw) {
    _value = raw;
}

// Conversion functions
float Fixed::toFloat(void) const {
    return (float)_value / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
    return _value >> _fractionalBits;
}

// Static min/max functions
Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a > b) ? a : b;
}


//  * This function allows a Fixed object to be inserted into an output stream (such as std::cout).
//  * It calls the toFloat() method of the Fixed class to obtain the floating-point value and writes it to the stream.

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
