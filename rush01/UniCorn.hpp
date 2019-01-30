/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UniCorn.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgonor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 16:06:03 by dgonor            #+#    #+#             */
/*   Updated: 2018/10/14 16:06:05 by dgonor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef UNICORN_HPP
# define UNICORN_HPP

# include "Module.hpp"
#include <string>
#include <time.h>
#include <stdlib.h>

class UniCorn : public Module
{
	public:
		UniCorn();
		~UniCorn();
		UniCorn(UniCorn const & src);
		UniCorn & operator=(UniCorn const & rhs);
		std::string		getData(void);
};

#endif
