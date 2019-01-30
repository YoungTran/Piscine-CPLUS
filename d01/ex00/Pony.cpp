/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 01:54:27 by ytran             #+#    #+#             */
/*   Updated: 2018/10/03 01:54:29 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void)
{
    std::cout << "Pony Contructor" << std::endl;
    return ;
}

Pony::~Pony(void)
{
    std::cout << "Pony Deconstructor" << std::endl;
    return;
}

std::string Pony::get_height(std::string str)
{
    this->_height = str;
    return this->_height;
}
