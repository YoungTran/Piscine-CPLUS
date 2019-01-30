/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 22:17:09 by ytran             #+#    #+#             */
/*   Updated: 2018/10/03 22:17:10 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>
#include <sstream>

class Weapon {
    
    private:
        std::string _type;
    public:
        Weapon(std::string input);
        ~Weapon(void);
        std::string const &getType();
        void    setType(std::string);
};
#endif
