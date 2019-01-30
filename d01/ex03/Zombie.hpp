/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 05:45:58 by ytran             #+#    #+#             */
/*   Updated: 2018/10/03 05:45:59 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>
#include <ctime>

class Zombie {

      private:
        std::string _name;
        std::string _type;

      public:
        Zombie(std::string name, std::string type);
        Zombie(void);
        ~Zombie(void);
        void announce(void);
};

#endif
