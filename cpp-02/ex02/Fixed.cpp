#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed::Fixed() : _rawBits(0)
{
}

Fixed::Fixed(const int value)
    : _rawBits(value << _fractionalBits)
{
}

Fixed::Fixed(const float value)
    : _rawBits(roundf(value * (1 << _fractionalBits)))
{
}

Fixed::Fixed(const Fixed& other)
    : _rawBits(other._rawBits)
{
}

Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other)
        _rawBits = other._rawBits;

    return *this;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits(void) const
{
    return _rawBits;
}

void Fixed::setRawBits(int const raw)
{
    _rawBits = raw;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(_rawBits)
        / static_cast<float>(1 << _fractionalBits);
}

int Fixed::toInt(void) const
{
    return _rawBits / (1 << _fractionalBits);
}

bool Fixed::operator>(const Fixed& other) const
{
    return _rawBits > other._rawBits;
}

bool Fixed::operator<(const Fixed& other) const
{
    return _rawBits < other._rawBits;
}

bool Fixed::operator>=(const Fixed& other) const
{
    return _rawBits >= other._rawBits;
}

bool Fixed::operator<=(const Fixed& other) const
{
    return _rawBits <= other._rawBits;
}

bool Fixed::operator==(const Fixed& other) const
{
    return _rawBits == other._rawBits;
}

bool Fixed::operator!=(const Fixed& other) const
{
    return _rawBits != other._rawBits;
}

Fixed Fixed::operator+(const Fixed& other) const
{
    Fixed result;

    result.setRawBits(_rawBits + other._rawBits);
    return result;
}

Fixed Fixed::operator-(const Fixed& other) const
{
    Fixed result;

    result.setRawBits(_rawBits - other._rawBits);
    return result;
}

Fixed Fixed::operator*(const Fixed& other) const
{
    return Fixed(toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
    return Fixed(toFloat() / other.toFloat());
}

Fixed& Fixed::operator++()
{
    ++_rawBits;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed oldValue(*this);

    ++_rawBits;
    return oldValue;
}

Fixed& Fixed::operator--()
{
    --_rawBits;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed oldValue(*this);

    --_rawBits;
    return oldValue;
}

Fixed& Fixed::min(Fixed& first, Fixed& second)
{
    if (first < second)
        return first;

    return second;
}

const Fixed& Fixed::min(const Fixed& first, const Fixed& second)
{
    if (first < second)
        return first;

    return second;
}

Fixed& Fixed::max(Fixed& first, Fixed& second)
{
    if (first > second)
        return first;

    return second;
}

const Fixed& Fixed::max(const Fixed& first, const Fixed& second)
{
    if (first > second)
        return first;

    return second;
}

std::ostream& operator<<(std::ostream& output, const Fixed& value)
{
    output << value.toFloat();
    return output;
}