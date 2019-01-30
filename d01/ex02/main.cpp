/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 05:46:24 by ytran             #+#    #+#             */
/*   Updated: 2018/10/03 05:46:44 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

static void randomChump(void)
{
    int iSecret;
    std::string type;
    std::string name;
    std::string nameArray[13] = { "Lawson", "Lucian", "Josiah", "Theo",
    "Miller", "Malachi", "Hayes", "Hezekiah",
    "Mathias", "Finley", "Oakley", "Ephraim",
    "Harper"};
     Zombie zombie[1];
    
    std::cout << "Before zombie initialization.." << std::endl;
    ZombieEvent* zombievent = new ZombieEvent();
    std::cout << "Enter a zombie type: " << std::endl;
    std::getline(std::cin, type);
    zombievent->setZombieType(type);
    srand(time(NULL));
    iSecret = rand() % 13;
    zombie[1].announce(nameArray[iSecret], type);
    delete zombievent;
}

int     main(void)
{
    std::string input;

    std::cout << "Welcome to the random zombie generator.." << std::endl;
    std::cout << "Commands: rand / exit" << std::endl;
    while (std::getline(std::cin, input, '\n'))
    {
        if (input.compare("rand") == 0)
            randomChump();
        else if (input.compare("exit") == 0)
            break ;
        else
            std::cout << "Not a valid command !" << std::endl;
    }
    return (0);
}