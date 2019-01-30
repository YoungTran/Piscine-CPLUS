/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 18:29:09 by ytran             #+#    #+#             */
/*   Updated: 2018/10/03 18:29:10 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{   
    return;
}


Zombie::Zombie()
{
    return;
}

Zombie::~Zombie(void)
{
    return;
}
void Zombie::announce(void)
{
    std::cout << "<" << this->_name << "  ("
        << this->_type << ")> " << "Braiiiiiiinnnssss..." << std::endl;
}