/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HostModule.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 22:00:41 by ytran             #+#    #+#             */
/*   Updated: 2018/10/13 22:00:42 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOSTMODULE_HPP
#define HOSTMODULE_HPP

# include "Module.hpp"
class HostModule : public Module
{
    public:
        HostModule();
        HostModule(HostModule const & src);
        HostModule &    operator=(HostModule const & rhs);
        ~HostModule();

        std::string     getData(void);
};

#endif 
