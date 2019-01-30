/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 05:46:16 by ytran             #+#    #+#             */
/*   Updated: 2018/10/03 05:46:17 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
    return;
}

ZombieEvent::~ZombieEvent(void)
{
    std::cout << "freed" << std::endl;
    return;
}
void ZombieEvent::setZombieType(std::string type)
{
    this->_type = type;
    return;   
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie *newZombie = new Zombie();

    this->_name = name;
    return (newZombie);
}
