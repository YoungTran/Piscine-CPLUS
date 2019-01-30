/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OSModule.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 23:01:22 by ytran             #+#    #+#             */
/*   Updated: 2018/10/13 23:01:23 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OSMODULE_H
#define OSMODULE_H

# include "Module.hpp"

class OSModule : public Module
{
    public:
        OSModule();
        OSModule(OSModule const & src);
        OSModule &    operator=(OSModule const & rhs);
        ~OSModule();

        std::string     getData(void);
};

#endif 