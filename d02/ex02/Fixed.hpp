/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 15:50:27 by ytran             #+#    #+#             */
/*   Updated: 2018/10/04 15:50:29 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>
#include <cmath>

class Fixed {

    public:
        Fixed(void);
        Fixed(const int num);
        Fixed(const float num);
        Fixed(const Fixed& copy);
        ~Fixed(void);
        Fixed& operator=(const Fixed & rhs);
        Fixed               &operator++(void);
        Fixed               &operator--(void);
        Fixed               operator++(int);
        Fixed               operator--(int);
        bool                operator>(const Fixed &rhs) const;
        bool                operator<(const Fixed &rhs) const;
        bool                operator>=(const Fixed &rhs) const;
        bool                operator<=(const Fixed &rhs) const;
        bool                operator==(const Fixed &rhs) const;
        bool                operator!=(const Fixed &rhs) const;
        Fixed               operator+(const Fixed &rhs) const;
        Fixed               operator-(const Fixed &rhs) const;
        Fixed               operator*(const Fixed &rhs) const;
        Fixed               operator/(const Fixed &rhs) const;
        float toFloat(void) const;
        int toInt(void) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);
        static Fixed        &min(Fixed &a, Fixed &b);
        const static Fixed  &min(const Fixed &a, const Fixed &b);
        static Fixed        &max(Fixed &a, Fixed &b);
        const static Fixed  &max(const Fixed &a, const Fixed &b);

    private:
        int _fixedN;
        static const int _scale;
};
std::ostream    &operator<<(std::ostream &out, Fixed const &in);
#endif
