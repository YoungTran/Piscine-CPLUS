/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 05:46:08 by ytran             #+#    #+#             */
/*   Updated: 2018/10/03 05:46:09 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

#include <string>
#include <iostream>
#include "Zombie.hpp"

class ZombieEvent {

    private:
        std::string _name;
        std::string _type;

    public:
        ZombieEvent(void);
        ~ZombieEvent(void);
        void setZombieType(std::string _type);
        Zombie* newZombie(std::string);
};

#endif
