/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 05:45:49 by ytran             #+#    #+#             */
/*   Updated: 2018/10/03 05:45:50 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    return;
}

Zombie::~Zombie(void)
{
    return;
}
void Zombie::announce(std::string name, std::string type)
{
    std::cout << "<" << name << "  ("
        << type << ")> " << "Braiiiiiiinnnssss..." << std::endl;
}