/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 22:16:46 by ytran             #+#    #+#             */
/*   Updated: 2018/10/03 22:16:47 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include <sstream>
#include <string>
#include "Weapon.hpp"

class	HumanA {

    private:
        Weapon &_weapon;
        std::string _name;

	public: 

		HumanA(std::string name, Weapon &var); 
		~HumanA(void);
		void	attack(void);
};

#endif
