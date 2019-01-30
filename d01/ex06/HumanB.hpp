/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 22:16:57 by ytran             #+#    #+#             */
/*   Updated: 2018/10/03 22:16:58 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include <sstream>
#include <string>
#include "Weapon.hpp"

class	HumanB {

    private:
        Weapon 		*_weapon;
		std::string _name;
	public: 

		HumanB(std::string name); 
		~HumanB(void);
		void	attack();
		void	setWeapon(Weapon &var);
};

#endif