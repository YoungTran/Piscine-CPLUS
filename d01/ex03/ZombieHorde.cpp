/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 18:29:32 by ytran             #+#    #+#             */
/*   Updated: 2018/10/03 18:29:34 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"


void ZombieHorde::announce(void)
{
    int i = 0;

    while (i < this->total)
    {
        this->horde[i].announce();
        i++;
    }
}

Zombie& ZombieHorde::randomChump(void)
{
    std::string nameArray[13] = { "Lawson", "Lucian", "Josiah", "Theo",
    "Miller", "Malachi", "Hayes", "Hezekiah",
    "Mathias", "Finley", "Oakley", "Ephraim",
    "Harper"};

    Zombie *ptr = new Zombie(nameArray[std::rand() % 13], "WhiteWalker");
    return (*ptr);
}

ZombieHorde::ZombieHorde(int n) : total(n)
{
	this->horde = new Zombie[n]();
	int i = 0;

	while (i < this->total)
	{
        this->horde[i] = randomChump();
        i++;
    }
	return;
}

ZombieHorde::~ZombieHorde(void) 
{
	delete [] this->horde;
	return;
}