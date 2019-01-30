/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RAMmodule.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgonor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 20:47:57 by dgonor            #+#    #+#             */
/*   Updated: 2018/10/13 20:48:00 by dgonor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAMMODULE_HPP
# define RAMMODULE_HPP

# include "Module.hpp"
# include <sstream>


class RAMmodule : public Module
{
	public:
		RAMmodule();
		~RAMmodule();
		RAMmodule(RAMmodule const & src);
		RAMmodule & operator=(RAMmodule const & rhs);
		std::string		getData(void);	
		std::string				getTotalRAM();
		std::string				getUsedRAM();
		std::string				getFreeRAM();
};

#endif
