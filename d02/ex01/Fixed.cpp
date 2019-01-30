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
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructer called" << std::endl;
    *this = copy;
    return;
}

Fixed::Fixed(const int num)
{
    this->_fixedN = num << _scale;
    std::cout << "Int contructor called" << std::endl;
    return;
}

Fixed::Fixed(const float num)
{
    this->_fixedN = roundf(num * (1 << _scale));
    std::cout << "Float constructor called" << std::endl;
    return ;
}

Fixed& Fixed::operator=(const Fixed & rhs)
{
    std::cout << "Assignment operator called" << std::endl;
    if (this != &rhs)
        this->_fixedN = rhs.getRawBits();
    return(*this);

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
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedN);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedN = raw;
    std::cout << "setRawBits member function called" << std::endl;
    return;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}
