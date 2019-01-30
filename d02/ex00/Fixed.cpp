/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 13:36:16 by ytran             #+#    #+#             */
/*   Updated: 2018/10/04 13:36:18 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int scale = 8;

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

Fixed& Fixed::operator=(const Fixed & rhs)
{
    std::cout << "Assignment operator called" << std::endl;
    if (this != &rhs)
        this->_fixedN = rhs.getRawBits();
    return(*this);

}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedN);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedN = raw;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}