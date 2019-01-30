/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 15:50:35 by ytran             #+#    #+#             */
/*   Updated: 2018/10/04 15:50:37 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_scale = 8;

Fixed::Fixed(void) : _fixedN(0)
{
    //std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(const Fixed &copy)
{
    //std::cout << "Copy constructer called" << std::endl;
    *this = copy;
    return;
}

Fixed::Fixed(const int num)
{
    this->_fixedN = num << _scale;
    //std::cout << "Int contructor called" << std::endl;
    return;
}

Fixed::Fixed(const float num)
{
    this->_fixedN = roundf(num * (1 << _scale));
    //std::cout << "Float constructor called" << std::endl;
    return ;
}

Fixed& Fixed::operator=(const Fixed & rhs)
{
    //std::cout << "Assignment operator called" << std::endl;
    if (this != &rhs)
        this->_fixedN = rhs.getRawBits();
    return(*this);
}



//conditional function returns
bool Fixed::operator>(const Fixed &rhs) const
{
    return (this->_fixedN > rhs._fixedN);
}

bool Fixed::operator<(const Fixed &rhs) const
{
    return (this->_fixedN < rhs._fixedN);
}

bool Fixed::operator>=(const Fixed &rhs) const
{
    return (this->_fixedN >= rhs._fixedN);
}

bool Fixed::operator<=(const Fixed &rhs) const
{
    return (this->_fixedN <= rhs._fixedN);
}

bool Fixed::operator==(const Fixed &rhs) const
{
    return (this->_fixedN == rhs._fixedN);
}

bool Fixed::operator!=(const Fixed &rhs) const
{
    return (this->_fixedN != rhs._fixedN);
}



//basic arithmetic operations
Fixed Fixed::operator+(const Fixed &rhs) const
{
    return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
    return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
    return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
    return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed &Fixed::operator++(void)
{
    this->_fixedN += 1;
    return (*this);
}

Fixed &Fixed::operator--(void)
{
    this->_fixedN -= 1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return (tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return (tmp);
}


//Min or Max
Fixed &Fixed::min( Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

const Fixed &Fixed::min( const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}

Fixed &Fixed::max( Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

const Fixed &Fixed::max( const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}

std::ostream    &operator<<(std::ostream &out, Fixed const &in)
{
    out << in.toFloat();
    return out;
}

float Fixed::toFloat(void) const
{
    return ((float)(this->_fixedN) / (1 << this->_scale));
}

int Fixed::toInt(void) const
{
    return ((int)(this->_fixedN >> this->_scale));
}

int Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedN);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedN = raw;
    //std::cout << "setRawBits member function called" << std::endl;
    return;
}

Fixed::~Fixed(void)
{
    //std::cout << "Destructor called" << std::endl;
    return;
}
