/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 13:36:09 by ytran             #+#    #+#             */
/*   Updated: 2018/10/04 13:36:10 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>

class Fixed {

    public:
        Fixed(void);
        Fixed(const Fixed& copy);
        ~Fixed(void);
        Fixed& operator=(const Fixed & rhs);
        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:
        int _fixedN;
        static const int scale;
};

#endif