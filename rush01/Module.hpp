/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Module.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 20:55:25 by ytran             #+#    #+#             */
/*   Updated: 2018/10/13 20:55:26 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MODULE_HPP
#define MODULE_HPP

#include "IMonitorModule.hpp"
#include <string>
#include <iostream>

class Module : public IMonitorModule
{
    protected:
        std::string const _name;
        int _sx;
        int _sy;
        int _x;
        int _y;
    
    public:
        Module(std::string const &name);
        Module(Module const &src, std::string const &name);
        Module & operator=(Module const & rhs);
        virtual ~Module();
        std::string     getName() const;
        int             getSizeX();
        int             getSizeY();
        int             getX();
        int             getY();
        void            setSizeX(int);
        void            setSizeY(int);
        void            setX(int);
        void            setY(int);
        virtual std::string     getData(void);
};

#endif
