/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 22:17:05 by ytran             #+#    #+#             */
/*   Updated: 2018/10/03 22:17:06 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
    return ;
}

Weapon::~Weapon(void)
{
    return ;
}

void
Weapon::setType(std::string str)
{
    this->_type = str;
    return ;
}

const std::string&
Weapon::getType(void)
{
    return (this->_type);
}