/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 18:29:21 by ytran             #+#    #+#             */
/*   Updated: 2018/10/03 18:29:23 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <ctime>

class ZombieHorde {

	public: 

		ZombieHorde(int n); 
		~ZombieHorde(void);

		int		total;
		Zombie	*horde;

		Zombie& randomChump(void);
		void announce(void);
};

#endif