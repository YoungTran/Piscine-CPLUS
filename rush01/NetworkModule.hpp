/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NetworkModule.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 02:30:45 by ytran             #+#    #+#             */
/*   Updated: 2018/10/14 02:30:46 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NETWORKMODULE_H
#define NETWORKMODULE_H

#include "Module.hpp"
#include <sstream>

class NetworkModule : public Module
{
public:
    NetworkModule();
    NetworkModule(NetworkModule const & src);
    NetworkModule &    operator=(NetworkModule const & rhs);
    ~NetworkModule();

    std::string     getPacketsIn(void);
    std::string     getPacketsOut(void);
    std::string     getBytesColls(void); 
    std::string     getBytes(void);
    std::string     getData(void);
};

#endif


